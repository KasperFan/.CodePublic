'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-13 16:48:29
LastEditTime: 2023-03-13 16:58:42
FilePath: /.code/tianti/L1_003.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

list = [i for i in range(10)]
for i in range(10):
    list[i] = 0
string = input()
for i in string:
    list[eval(i)] += 1
for i in range(10):
    if list[i] > 0:
        print(f"{i}:{list[i]}")
