'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-06 08:26:56
LastEditTime: 2023-03-10 15:27:21
FilePath: /.code/tianti_1/L1_076.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
description: 
'''

n, m = map(int, input().split())
P = []
for i in range(n):
    P.append(float(input()))


for i in P:
    if i < m:
        print("On Sale! %.1f" % i)
print("\a")