'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-10 00:28:11
LastEditTime: 2023-03-10 15:47:24
FilePath: /.code/tianti_1/L1_080.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
description: 
'''

a = [eval(i) for i in input().split()]
n = a.pop(len(a)-1)
for i in range(n):
    temp = a[i]*a[i+1]
    if temp > 9:
        a.append(temp//10)
        a.append(temp % 10)
    else:
        a.append(temp)
for i in range(0, n-1):
    print(a[i], end=" ")
print(a[n-1])
