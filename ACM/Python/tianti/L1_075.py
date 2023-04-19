'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-06 08:15:32
LastEditTime: 2023-03-10 15:40:37
FilePath: /.code/tianti_1/L1_075.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

str = input()
l = len(str)
if l < 6:
    year = int(str[0:2])
    if year < 22:
        print(f"20{str[0:2]}-{str[2:4]}")
    else:
        print(f"19{str[0:2]}-{str[2:4]}")
else:
    print(f"{str[0:4]}-{str[4:6]}")
