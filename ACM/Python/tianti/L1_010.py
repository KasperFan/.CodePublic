'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-15 00:29:38
LastEditTime: 2023-03-15 00:32:41
FilePath: /.code/tianti/L1_010.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

arr = [eval(i) for i in input().split()]
arr.sort()
for i in range(3):
    if i == 2:
        print(arr[i])
    else:
        print(arr[i], end="->")
