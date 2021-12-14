#!/usr/bin/env python3
# coding: UTF-8

import RPi.GPIO as GPIO
import sys
import time

class Switch:
    def __init__(self):
        GPIO.setmode(GPIO.BCM)
        
        #self.sensor_values = list(range(3))
        self.sensor_values = [0] * 20
        self.sw = [6, 13, 19]
        for i in self.sw:
            GPIO.setup(i, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)

    def get(self):
        #self.sensor_values.clear()
        for i in self.sw:
            self.sensor_values[i] = GPIO.input(i)

if __name__ == '__main__':
    main()
