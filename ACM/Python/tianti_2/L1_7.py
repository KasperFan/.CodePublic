'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-12 00:29:00
LastEditTime: 2023-03-12 00:45:50
FilePath: /.code/tianti_2/L1_7.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

n, m = map(int, input().split())
x = 2**n
lrc = []
for i in range(m):
    lrc.append(input())
mith = []
for i in lrc:
    temp = x
    tex = n-1
    for j in i:
        if j == "y":
            temp -= 2**tex
            tex -= 1
        else:
            tex -= 1
    mith.append(temp)

for i in mith:
    print(i)
