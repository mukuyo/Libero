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
        #self.switch = limit_switch.Switch()
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(26,GPIO.OUT)

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
                "cmd_val",
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
    
    def camera_callback(self):
        self.camera.capture()

    def timer_callback(self):
        position_degree = 0.0
        packet = bytearray()
        packet.append(0xFF)
        self.camera.capture()
        if self.camera.pos == None or self.decide == False:
            position_degree = self.target_degree
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
        #print(self.target_degree)
        #target_degree = self.degree_min
        self.low = int(position_degree) & 0x00FF
        self.high = (int(position_degree) & 0xFF00) >> 8

        packet.append(self.low)
        packet.append(self.high)
        
        #self.decide = False
        if self.scan_count == 1:
            self.imu = True

        if self.decide == False:
            self.distance = 0
            self.left_power = 0
            self.right_power = 0
            self.camera.appear = False
        
        packet.append(int(self.target_distance))
        packet.append(int(self.distance))
        packet.append(int(self.left_power))
        packet.append(int(self.right_power))
        packet.append(self.imu)
        packet.append(self.camera.appear)
        self.ser.write(packet)

        print(self.left_power, end=' ')
        print(self.right_power, end=' ')
        print(self.target_distance, end = " ")
        print(position_degree, end = " ")
        print(self.scan_count, end = " ")
        print(self.camera.appear, end = " ")
        print(position_degree)

    def teleop_callback(self, msg):
        self.left_pow = msg.point.x
        self.right_pow = msg.point.y

    def scan_callback(self, msg):
        Odom = Odometry()
        #Odom.frame_id = 0
        self.pub_odom.publish(Odom)
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

            if not(data) == 0.0 and (degree_one*count > 60 and degree_one*count < 300) and distance_min > data:
                distance_min = data
                self.distance = data
                self.degree_min = degree_one * count + 180

        self.target_distance = self.target_distance*100 - 30
        self.distance = self.distance*100 - 50
        distance_temp = self.distance
          
        if self.distance > 40:
            self.distance = 40
        elif self.distance < 0:
            self.distance = 0
        
        if distance_temp > 40:
            distance_temp = 40
        elif distance_temp < 20:
            distance_temp = 20
        
        if self.target_distance > 40:
            self.target_distance = 40
        elif self.target_distance < 0:
            self.target_distance = 0
        
        if self.degree_min > 360:
            self.degree_min = self.degree_min -360
        if self.degree_min > 180:
            self.degree_min = self.degree_min - 360 
        #target_degree = self.degree_min
        #self.low = int(target_degree) & 0x00FF
        #self.high = (int(target_degree) & 0xFF00) >> 8
        
        if self.distance < 5:
            if self.camera.appear == True:
                self.imu = True
                self.left_power = self.target_distance
                self.right_power = self.target_distance
            else:
                self.imu = False
                self.avoid_func()
        else:
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

            self.right_power = 35
        else:
            self.left_power = 35
            #self.right_power = 20
            self.right_power = abs(abs(self.degree_min) - 110)
            if abs(self.right_power) > 20:
                self.right_power = 0.0 

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
        for i in range(5):
            packet = bytearray()
            packet.append(0xFF)
            for i in range(7):
                packet.append(0)
            self.ser.write(packet)
            #print(int(self.distance))
         
     
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
