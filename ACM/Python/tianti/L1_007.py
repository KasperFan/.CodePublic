'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-14 12:31:43
LastEditTime: 2023-03-14 12:37:42
FilePath: /.code/tianti/L1_007.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

arr = ["ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"]
num = input()
for i in range(len(num)):
    if num[i] == "-":
        print("fu",end=" ")
    elif i == len(num)-1:
        print(arr[eval(num[i])])
    else:
        print(arr[eval(num[i])],end=" ")
