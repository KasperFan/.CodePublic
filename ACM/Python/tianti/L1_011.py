'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-14 15:56:02
LastEditTime: 2023-03-15 00:12:46
FilePath: /.code/tianti/L1_011.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''
a = input()
b = input()
a = "".join([c for c in a if c not in b])
print(a)
