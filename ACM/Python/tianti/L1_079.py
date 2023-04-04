'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-10 00:08:42
LastEditTime: 2023-03-10 00:14:57
FilePath: /.code/tianti_1/L1_079.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
description: 
'''

n = eval(input())
max = 0; min = int(1e6)
conm = 1; conx = 1
arr = list(map(int, input().split()))

for i in arr:
    if min > i:
        min = i
        conm = 1
    elif min == i:
        conm += 1
    if max < i:
        max = i
        conx = 1
    elif max == i:
        conx += 1

print(f"{min} {conm}")
print(f"{max} {conx}")
