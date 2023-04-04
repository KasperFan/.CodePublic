'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-04-04 20:47:03
LastEditTime: 2023-04-04 21:11:46
FilePath: /.Code/ACM/Python/数列求值.py
describes: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''
num = []
num.append(0)
num.append(1)
num.append(1)
num.append(1)
for i in range(4,20190325):
    num.append((num[i-1]+num[i-2]+num[i-3])%10000)
print(num.pop())