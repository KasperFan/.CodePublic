'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-14 12:44:09
LastEditTime: 2023-03-14 13:03:52
FilePath: /.code/tianti/L1_054.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

ch, n = input().split()
n = eval(n)
map = [[] * n] * n
for i in range(n):
    map[i]=[j for j in input().split("")]

print(map)
