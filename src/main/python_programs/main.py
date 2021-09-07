
#!/usr/bin/env python3
# coding: UTF-8

from .camera import blob_track
from .switch import limit_switch

import math
import socket 
import struct
import RPi.GPIO as GPIO
import time
import serial
import struct
import cv2
import numpy as np
import math
import rclpy

from rclpy.node import Node
from message_info.msg import RobotCommands, RealCommands
from geometry_msgs.msg import Twist, PointStamped
from sensor_msgs.msg import LaserScan
from rclpy.qos import qos_profile_sensor_data
from nav_msgs.msg import Odometry
GPIO.setwarnings(False)

class RealSender(Node):
    def __init__(self):
        super().__init__('receiver')
        self.camera = blob_track.Camera()
        self.switch = limit_switch.Switch()
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(26,GPIO.OUT)
        GPIO.setup(16,GPIO.OUT)
        GPIO.setup(20,GPIO.OUT)
        GPIO.setup(21,GPIO.OUT)
        GPIO.setup(7, GPIO.OUT)
        #GPIO.setup(2, GPIO.IN, pull_up_down=GPIO.PUD_UP)
        GPIO.setup(2, GPIO.IN)
        GPIO.add_event_detect(2, GPIO.RISING,callback=self.ser_callback, bouncetime=100)
        self.ser = serial.Serial("/dev/ttyACM0", 115200, timeout=0.5)
        self.time_period = 0.016
        self.create_timer(self.time_period, self.timer_callback)
        self.create_timer(0.016, self.camera_callback)
        self.sub_commands = self.create_subscription(
                PointStamped,
                'clicked_point',
                self.pc_callback, 10)
        self.sub_teleop = self.create_subscription(
                Twist,
                "cmd_vel",
                self.teleop_callback, 10)
        self.sub_scan = self.create_subscription(
                LaserScan,
                "scan",
                self.scan_callback, qos_profile_sensor_data)
        self.pub_odom = self.create_publisher(
                Odometry,
                "odom", 10)
        self.M = [0, 0]
        self.distance = 0
        self.low =0
        self.high =0
        self.target_distance = 0
        self.degree_min = 0.0
        self.target_degree = 0.0
        self.decide = False
        self.left_power = 0.0
        self.right_power = 0.0
        self.imu = True
        self.target_distance = 0.0
        self.scan_count = 0
        self.touch = [0] * 20
        self.touch_count = 0
        self.start = 0
        self.touch_flag = 0
        self.touch_flag_2 = 0
        self.touch_flag_3 = 0
        self.first_imu = False
        self.val1 = 0
        self.teleop_flag = 0
        self.pow_x = 0
        self.pow_y =0
        GPIO.output(7,0)
        print("START")

    def ser_callback(self, channel):
        result1 = self.ser.read()
        self.val1 = int.from_bytes(result1, byteorder='big')
    
    def camera_callback(self):
        j=0
        #head = self.ser.read(1)
        #result1 = self.ser.read()
        #result2 = self.ser.read()
        #val1 = int.from_bytes(result1, byteorder='big')
        #val2 = int.from_bytes(result2, byteorder='big')
        #print(val1)
        #print(bytes.fromhex(result))
        #self.camera.capture()
        #str = self.ser.readline()
        #print(str.strip().decode('utf-8'))
    def timer_callback(self):
        #print(self.val1)
        position_degree = 0.0
        packet = bytearray()
        packet.append(0xFF)
        self.camera.capture()
        self.switch.get()
        
        self.touch_count = 0
        counter = -1
        for i in self.switch.sensor_values:
            counter = counter + 1
            if i == True:
                self.touch[counter] = -1
                self.decide = False
                self.imu = False
            if self.touch[counter] == -1 and i == False:
                self.touch[counter] = 1
                self.imu = True
                self.decide = True
            if not(self.touch[counter]) == -1:
                self.touch_count = self.touch_count + self.touch[counter]
            if self.touch_count == 1:
               self.touch_flag = self.touch_flag + 1
               if self.touch_flag == 1:
                   self.start = 0
            if self.touch_count == 2:
               self.touch_flag_2 = self.touch_flag_2 + 1
               if self.touch_flag_2 == 1:
                   self.start = 0
            if self.touch_count == 3:
               self.touch_flag_3 = self.touch_flag_3 + 1
               if self.touch_flag_3 == 1:
                   self.start = 0
                #self.scan_count = 0
        if self.touch[6] == True:
            GPIO.output(20,1)
        if self.touch[13] == True:
            GPIO.output(16, 1)
        if self.touch[19] == True:
            GPIO.output(21, 1)

        if self.touch_count > 0  and self.start == 0:
            self.decide = False
            self.first_imu = True
            self.imu = True
            self.start = time.time()
        if not(self.start) == 0 and time.time() - self.start > 5 and self.touch_flag_3 == 0:
            self.decide = True 
            self.first_imu = False
            #self.touch_flag = self.touch_count
                #camera_flag = True
        #if camera_flag == True and self.camera.appear == True:
        #    self.camera.appear
        if self.camera.appear == False or self.decide == False or self.first_imu == True:
            target_degree_calc = self.target_degree + (125 * self.touch_count)
            position_degree = target_degree_calc
            #print(target_degree_calc)
        else:
            position_degree = -(self.camera.pos[0] - 310) / 4
        #if position_degree < -180:
        #    position_degree += 360
        #elif position_degree > 180:
        #    position_degree -= 360

        if self.target_distance > 255:
            self.target_distance = 255

        if position_degree < 0:
            position_degree += 360
        if position_degree > 360:
            position_degree = position_degree - 360
        #print(self.target_degree)
        #target_degree = self.degree_min
        self.low = int(position_degree) & 0x00FF
        self.high = (int(position_degree) & 0xFF00) >> 8

        packet.append(self.low)
        packet.append(self.high)
        #self.decide = False
        if self.touch_count == 3 and self.scan_count == 2:
           self.decide = False
           self.imu = True
           self.scan_count = 0
           self.touch_count = 0
           for i in range(20):
               self.touch[i] = 0

        if self.scan_count == 1:
            self.imu = True
        if self.teleop_flag == True:
            self.decide = True
            self.imu = False
        #self.decide = False
        if self.decide == False:
            self.distance = 0
            self.left_power = 0
            self.right_power = 0
            self.camera.appear = False
        
        #print(self.touch_count, end=" ")
        #print()
        if self.teleop_flag == True:
            self.left_power = self.pow_x
            self.right_power = self.pow_y

        packet.append(int(self.target_distance))
        packet.append(int(self.distance))
        packet.append(int(self.left_power))
        packet.append(int(self.right_power))
        #self.imu = False
        packet.append(self.imu)
        packet.append(self.camera.appear)
        self.ser.write(packet)
        """
        print(self.left_power, end=' ')
        print(self.right_power, end=' ')
        print(self.target_distance, end = " ")
        print(position_degree, end = " ")
        print(self.imu, end = " ")
        print(self.decide, end = " ")
        print(self.scan_count, end = " ")
        print(position_degree)
        """
        
        """
        #print(self.target_degree, end=' ')
        print(self.touch_count, end=' ')
        print(self.first_imu, end = " ")
        print(self.imu, end = " ")
        print(self.scan_count, end = " ")
        print(self.decide, end = " ")
        print(position_degree)
        """
    def teleop_callback(self, msg):
        self.teleop_flag = True
        if not(msg.linear.x) == 0:
            if msg.linear.x < 0:
                msg.linear.x = -msg.linear.x + 1
            self.pow_x = msg.linear.x*100
            self.pow_y = msg.linear.x*100
        elif not(msg.angular.z) == 0:
            if msg.angular.z < 0:
                self.pow_x = -msg.angular.z*100
                self.pow_y = (-msg.angular.z+1)*100
            if msg.angular.z > 0:
                self.pow_x = (msg.angular.z+1)*100
                self.pow_y = msg.angular.z*100
        if msg.angular.z == 0 and msg.linear.x == 0:
            self.pow_x=0
            self.pow_y=0
        print(self.pow_x, self.pow_y)

    def scan_callback(self, msg):
        if self.scan_count == 0:
            GPIO.output(16, 0)
            GPIO.output(20, 0)
            GPIO.output(21, 0)
        self.distance = 0
        target_distance_min = 10000.0
        distance_min = 10000.0
        count = 0   
        self.degree_min = 0.0   
        degree_one = 360.0 / len(msg.ranges)
        for data in msg.ranges:
            count = count + 1
            #if not(data) == 0.0 and distance_min > data:
            if not(data) == 0.0 and (degree_one*count > 150 and degree_one*count < 210) and target_distance_min > data:
                #print(degree_one*count)
                target_distance_min = data
                self.target_distance = data

            if not(data) == 0.0 and (degree_one*count > 80 and degree_one*count < 280) and distance_min > data:
                distance_min = data
                self.distance = data
                self.degree_min = degree_one * count + 180

        self.target_distance = self.target_distance*100 - 40
        self.distance = self.distance*100 - 50
        distance_temp = self.distance 
        
        if self.distance > 80:
            self.distance = 80
        elif self.distance < 0:
            self.distance = 0
        
        if distance_temp > 80:
            distance_temp = 80
        elif distance_temp < 40:
            distance_temp =40
        
        if self.target_distance > 60:
            self.target_distance = 60
        elif self.target_distance < 0:
            self.target_distance = 0
        
        if self.degree_min > 360:
            self.degree_min = self.degree_min -360
        if self.degree_min > 180:
            self.degree_min = self.degree_min - 360 
        
        if self.distance < 5 and not(self.touch_count) == 3 and self.first_imu == False:
        #if self.distance < 5:
            if self.camera.appear == True:
                GPIO.output(7, 0)
                self.imu = True
                self.left_power = self.target_distance
                self.right_power = self.target_distance
            else:
                GPIO.output(7, 1)
                self.imu = False
                self.avoid_func()
        else:
            GPIO.output(7, 0)
            self.imu = True
            self.left_power = distance_temp
            self.right_power = distance_temp
        
        #self.left_power = self.target_distance
        #self.right_power = self.target_distance
    def avoid_func(self):
        self.imu = False
            
        if abs(self.degree_min) < 90:
            self.left_power = abs(70 - abs(self.degree_min))
            if abs(self.left_power) > 20:
               self.left_power = 0.0

            self.right_power = 70
        else:
            self.left_power = 70
            #self.right_power = 20
            self.right_power = abs(abs(self.degree_min) - 110)
            if abs(self.right_power) > 20:
                self.right_power = 0.0 

    def pc_callback(self, msg):
        print("as")
        self.scan_count = self.scan_count + 1
        self.target_degree = math.degrees(math.atan2(msg.point.y, msg.point.x)) - self.target_degree
        if self.target_degree < -180:
            self.target_degree = self.target_degree + 360
        self.target_degree = -self.target_degree
        self.target_distance = math.sqrt((msg.point.y * msg.point.y) + (msg.point.x * msg.point.x)) * 100
        if self.scan_count >= 2:
            self.decide = True
        
    def stop(self):
        for i in range(5):
            packet = bytearray()
            packet.append(0xFF)
            for i in range(7):
                packet.append(0)
            self.ser.write(packet)
     
def main(args=None):
    rclpy.init(args=args)
    try:
        sender = RealSender()
        rclpy.spin(sender)
    except KeyboardInterrupt:
        pass
    finally:
        sender.stop()
        sender.destroy_node()
        GPIO.cleanup
        rclpy.shutdown()

if __name__ == '__main__':
    main()

