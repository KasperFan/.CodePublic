'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-10 15:41:49
LastEditTime: 2023-03-10 16:20:39
FilePath: /.code/tianti_1/L1_078.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

key1 = "qiandao"
key2 = "easy"
n, m = map(int, input().split())
arr = []
arrn = []

for i in range(n):
    arr.append(input())

for i in arr:
    if key1 not in i and key2 not in i:
        arrn.append(i)

if m >= len(arrn):
    print("Wo AK le", end="")
else:
    print(arrn[m], end="")
