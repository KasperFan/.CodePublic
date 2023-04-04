'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-19 00:17:40
LastEditTime: 2023-03-19 00:20:55
FilePath: /ACM/Python/tianti_3/L1_4.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

x, y = map(int, input().split())
print(5000-(y*x)//2-y*(100-x)-(100-x)*(100-y)//2)
