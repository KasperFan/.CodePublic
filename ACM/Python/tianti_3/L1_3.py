'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-19 02:21:21
LastEditTime: 2023-03-19 02:27:12
FilePath: /ACM/Python/tianti_3/L1_3.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''
import re

n = int(input())
poetrys = []
for _ in range(n):
    poetrys.append(input())
for i in range(n):
    if "ong," in poetrys[i] and "ong." in poetrys[i]:
        poetrys[i] = re.sub('\w+ \w+ \w+.$', 'qiao ben zhong.', poetrys[i])
        print(poetrys[i])
    else:
        print("Skipped")
