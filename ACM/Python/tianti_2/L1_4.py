'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-11 23:24:51
LastEditTime: 2023-03-11 23:34:19
FilePath: /.code/tianti_2/L1_4.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

n = eval(input())
num = [float(i) for i in input().split()]
ans = 0.0

for i in num:
    ans += 1/i

print("%.2f" % (1/(ans/n)))
