'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-11 23:23:06
LastEditTime: 2023-03-12 01:41:50
FilePath: /.code/tianti_2/L1_3.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

list = [2.455, 1.26]
perp, attribute, pr = map(float, input().split())
attribute = int(attribute)
ans = perp*list[attribute]
if ans > pr:
    print("%.2f T_T" % ans)
else:
    print("%.2f ^_^" % ans)
