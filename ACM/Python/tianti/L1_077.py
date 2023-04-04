'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-06 14:00:33
LastEditTime: 2023-03-10 00:24:22
FilePath: /.code/tianti_1/L1_077.py
Description: This file is created for learning Code.

Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

arr = list(map(int,input().split()))
ask = eval(input())
while ask >= 0 and ask <= 23:
    if arr[ask] > 50:
        print(f"{arr[ask]} Yes")
    else:
        print(f"{arr[ask]} No")
    ask = eval(input())
