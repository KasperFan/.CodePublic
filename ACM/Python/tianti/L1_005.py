'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-13 17:14:58
LastEditTime: 2023-03-15 13:16:22
FilePath: /.code/tianti/L1_005.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''


class Student(object):
    def __init__(self, ID, test_seat, exam_seat):
        self.ID = ID
        self.test_seat = test_seat
        self.exam_seat = exam_seat


N = eval(input())
students = [Student(*input().split()) for i in range(N)]
m = eval(input())
late = [i for i in input().split()]
for i in late:
    for j in students:
        if j.test_seat == i:
            print(f"{j.ID} {j.exam_seat}")
