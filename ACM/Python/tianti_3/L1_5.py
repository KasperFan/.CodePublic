'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-19 00:21:59
LastEditTime: 2023-03-19 00:24:16
FilePath: /ACM/Python/tianti_3/L1_5.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

w, h = map(float, input().split())
bmi = w/h**2
if bmi > 25:
    print("%.1f\nPANG" % bmi)
else:
    print("%.1f\nHai Xing" % bmi)
