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
import concurrent.futures

from rclpy.node import Node
from message_info.msg import RobotCommands, RealCommands, Slave
from geometry_msgs.msg import Twist, PointStamped
from sensor_msgs.msg import LaserScan, Joy
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
        GPIO.setup(27, GPIO.OUT)
        GPIO.setup(2, GPIO.IN)
        self.ser = serial.Serial("/dev/ttyACM0", 115200, timeout=0.5)
        self.time_period = 0.016
        self.create_timer(self.time_period, self.timer_callback)
        self.sub_commands = self.create_subscription(
                PointStamped,
                'clicked_point',
                self.pc_callback, 10)
        self.sub_scan = self.create_subscription(
                LaserScan,
                "scan",
                self.scan_callback, qos_profile_sensor_data)
        self.sub_joy = self.create_subscription(
                Joy,
                "joy",
                self.joy_callback, qos_profile_sensor_data)
        self.pub_odom = self.create_publisher(
                Odometry,
                "odom", 10)
        self.pub_slave = self.create_publisher(
                Slave,
                "slave", 10)
        self.distance = 0.0
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
        self.teleop_flag = 0
        self.pow_x = 0
        self.pow_y = 0
        GPIO.output(27,0)
        self.slave = Slave()
        self.avoid_flag = False
        print("START")
        executor = concurrent.futures.ThreadPoolExecutor(max_workers=2)
        executor.submit(self.ser_callback)
        executor.submit(self.get)

    def joy_callback(self,msg):
        self.teleop_flag = True
        msg.axes[1] = msg.axes[1] * 80
        msg.axes[4] = msg.axes[4] * 80
        if msg.axes[1] < 0:
            msg.axes[1] = -msg.axes[1] + 100.0
        if msg.axes[4] < 0:
            msg.axes[4] = -msg.axes[4] + 100.0
        self.pow_x = msg.axes[1]
        self.pow_y = msg.axes[4]
        print(self.pow_x, self.pow_y)
    
    def switch_set(self):
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

        if self.touch[6] == True:
            GPIO.output(20,0)
        if self.touch[13] == True:
            GPIO.output(16,0)
        if self.touch[19] == True:
            GPIO.output(21,0)

        if self.touch_count > 0  and self.start == 0:
            self.decide = False
            self.first_imu = True
            self.imu = True
            self.start = time.time()
        if not(self.start) == 0 and time.time() - self.start > 5 and self.touch_flag_3 == 0:
            self.decide = True 
            self.first_imu = False

    def timer_callback(self):
        position_degree = 0.0
        self.switch_set()
        if self.appear == False or self.decide == False or self.first_imu == True:
            target_degree_calc = self.target_degree + (130 * self.touch_count)
            position_degree = target_degree_calc
        else:
            position_degree = -(self.pos[0] - 310) / 4
        if position_degree < 0:
            position_degree += 360
        if position_degree > 360:
            position_degree = position_degree - 360

        self.low = int(position_degree) & 0x00FF
        self.high = (int(position_degree) & 0xFF00) >> 8

        if self.touch_count == 3:
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

        if self.decide == False:
            self.distance = 0
            self.left_power = 0
            self.right_power = 0
            self.appear = False
        
        if self.teleop_flag == True:
            self.left_power = self.pow_x
            self.right_power = self.pow_y

        if self.target_distance > 255:
            self.target_distance = 255

        #サブマイコンへのシリアル通信
        packet = bytearray()
        packet.append(0xFF)
        packet.append(self.low)
        packet.append(self.high)
        packet.append(int(self.target_distance))
        packet.append(int(self.distance))
        packet.append(int(self.left_power))
        packet.append(int(self.right_power))
        packet.append(self.imu)
        packet.append(self.appear)
        self.ser.write(packet)
        
        #GUIへの送信メッセージ
        self.slave.imu_degree = self.val1+self.val2*256.0
        self.slave.appear = self.appear
        if self.appear == True:
            self.slave.camera_degree = int(-(self.pos[0] - 310.0) / 4.0)
        else:
            self.slave.camera_degree = 0
        self.slave.lidar_degree = float(self.distance)
        self.slave.find = self.avoid_flag
        self.slave.touch = self.touch_count
        self.slave.left = float(self.left_power)
        self.slave.right = float(self.right_power)
        self.slave.decide = self.decide
        self.slave.imu = self.imu
        self.pub_slave.publish(self.slave)

    #lidarのサブスクライバー
    def scan_callback(self, msg):
        if self.scan_count == 1:
            GPIO.output(16, 1)
            GPIO.output(20, 1)
            GPIO.output(21, 1)
        self.distance = 0
        target_distance_min = 10000.0
        distance_min = 10000.0
        count = 0   
        self.degree_min = 0.0   
        degree_one = 360.0 / len(msg.ranges)
        for data in msg.ranges:
            count = count + 1
            if not(data) == 0.0 and (degree_one*count > 150 and degree_one*count < 210) and target_distance_min > data:
                target_distance_min = data
                self.target_distance = data

            if not(data) == 0.0 and (degree_one*count > 80 and degree_one*count < 280) and distance_min > data:
                distance_min = data
                self.distance = data
                self.degree_min = degree_one * count + 180

        self.target_distance = self.target_distance*100 - 45
        self.distance = self.distance*100 - 50
        distance_temp = self.distance 

        if self.degree_min > 360:
            self.degree_min = self.degree_min -360
        if self.degree_min > 180:
            self.degree_min = self.degree_min - 360 
        
        if self.distance < 7 and not(self.touch_count) == 3 and self.first_imu == False:
            if self.appear == True:
                self.avoid_flag = False
                GPIO.output(27, 0)
                self.imu = True
                self.left_power = self.target_distance
                self.right_power = self.target_distance
            else:
                print("avoid")
                GPIO.output(27, 1)
                self.imu = False
                self.avoid_func()
        else:
            self.avoid_flag = False
            GPIO.output(27, 0)
            self.imu = True
            self.left_power = distance_temp
            self.right_power = distance_temp
    
    #障害物回避
    def avoid_func(self):
        self.imu = False
        self.avoid_flag = True
        if abs(self.degree_min) < 90:
            self.right_power = abs(70 - abs(self.degree_min))
            if abs(self.right_power) > 20:
               self.right_power = 0.0
            elif abs(self.right_power) < 20:
               self.right_power = 20
            self.left_power = 60
        else:
            self.right_power = 60
            self.left_power = abs(abs(self.degree_min) - 110)
            if abs(self.left_power) > 20:
                self.left_power = 0.0 
    
    #rvizによる対象物の座標受け取り
    def pc_callback(self, msg):
        self.scan_count = self.scan_count + 1
        self.target_degree = math.degrees(math.atan2(msg.point.y, msg.point.x)) - self.target_degree
        if self.target_degree < -180:
            self.target_degree = self.target_degree + 360
        self.target_degree = -self.target_degree
        self.target_distance = math.sqrt((msg.point.y * msg.point.y) + (msg.point.x * msg.point.x)) * 100
        if self.scan_count >= 2:
            self.decide = True
        
    def stop(self):
        GPIO.output(27,0)
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
