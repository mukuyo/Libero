#!/usr/bin/env python3
# coding: UTF-8


import rclpy
from rclpy.node import Node
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

from geometry_msgs.msg import Point

GPIO.setwarnings(False)

class Send(Node):
    def __init__(self):
        super().__init__('send')

        GPIO.setmode(GPIO.BCM)
        self.ser = serial.Serial("/dev/ttyS0", 115200, timeout=0.5)

        self.realcommands = RealCommands()
        self.time_period = 0.016
        self.create_timer(self.time_period, self.timer_callback)
        self._sub_commands = self.create_subscription(
                RobotCommands,
                'robot_commands',
                self.pc_callback, 10)
        self.pub_commands = self.create_publisher(
            RealCommands,
            'real_commands', 10)
        self.M = [0, 0, 0, 0]

    def timer_callback(self):
        j = 0

    def pc_callback(self, msg):
        self.loop_flag = not self.loop_flag
        packet = bytearray()
        packet.append(0xFF)
       
        packet.append(int(dribble_power))
        packet.append(int(kick_power))
        #print(kick_power)
        self.ser.write(packet)
            
def main(args=None):
    rclpy.init(args=args)
    try:
        sender = Send()
        rclpy.spin(sender)
    except KeyboardInterrupt:
        pass
    finally:
        sender.serial_close()
        sender.destroy_node()
        GPIO.cleanup
        rclpy.shutdown()

if __name__ == '__main__':
    main()
