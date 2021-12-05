#!/usr/bin/env python3
# coding: UTF-8

import cv2
import numpy as np
import math

class Camera:
    def __init__(self):
        self.LOW_COLOR = np.array([0, 68, 176])
        self.HIGH_COLOR = np.array([179, 255, 255])
        self.wide = 0
        self.AREA_RATIO_THRESHOLD = 0.005
        self.appear = False
        # webカメラを扱うオブジェクトを取得
        self.degree_ball_robot = 0.0
        self.cap = cv2.VideoCapture(0, cv2.CAP_V4L2)

    def capture(self):
        if(self.cap.isOpened()):
            ret,frame = self.cap.read()

            if ret is False:
                print("cannot read image")

            # 位置を抽出
            pos = self.find_specific_color(
                frame,
                self.AREA_RATIO_THRESHOLD,
                self.LOW_COLOR,
                self.HIGH_COLOR
            )
            
            if pos is not None:
                # 抽出した座標に丸を描く
                cv2.circle(frame,pos,10,(0,0,255),-1)
                #print(pos[0])
                self.degree_ball_robot = ((self.wide / 2) - pos[0]) / ((self.wide / 2) / 31.1)
                #print(self.degree_ball_robot)
            else:
                self.degree_ball_robot = 1000.0
            # 画面に表示する
            #cv2.imshow('frame',frame)

            # キーボード入力待ち
            key = cv2.waitKey(1) & 0xFF

            # qが押された場合は終了する
            #if key == ord('q'):
            #    break
        
        else:
            self.cap.release()
            cv2.destroyAllWindows()

    def find_specific_color(self,frame,AREA_RATIO_THRESHOLD,LOW_COLOR,HIGH_COLOR):

        # 高さ，幅，チャンネル数
        h,w,c = frame.shape
        self.wide = w
        #print(h)
        # h = 480, w =  640find_specific_color
        # hsv色空間に変換
        hsv = cv2.cvtColor(frame,cv2.COLOR_BGR2HSV)
    
        # 色を抽出する
        ex_img = cv2.inRange(hsv,LOW_COLOR,HIGH_COLOR)

        # 輪郭抽出
        contours,hierarchy = cv2.findContours(ex_img,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)
    
        # 面積を計算
        areas = np.array(list(map(cv2.contourArea,contours)))

        if len(areas) == 0 or np.max(areas) / (h*w) < AREA_RATIO_THRESHOLD:
            # 見つからなかったらNoneを返す
            #print("the area is too small")
            self.appear = False
            return None
        else:
            self.appear = True
            # 面積が最大の塊の重心を計算し返す
            max_idx = np.argmax(areas)
            max_area = areas[max_idx]
            result = cv2.moments(contours[max_idx])
            x = int(result["m10"]/result["m00"])
            y = int(result["m01"]/result["m00"])
            return (x,y)
