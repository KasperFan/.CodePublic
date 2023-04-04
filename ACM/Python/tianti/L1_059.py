'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-16 19:49:40
LastEditTime: 2023-03-16 20:17:03
FilePath: /.code/tianti/L1_059.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

key = "ong"
n = int(input())
strings = [[]] * n
for i in range(n):
    strings[i] = [j for j in input().split()]

for i in range(n):
    if key in strings[i][len(strings[i])//2 - 1] and key in strings[i][len(strings[i])-1]:
        strings[i][len(strings[i])-3] = "qiao"
        strings[i][len(strings[i])-2] = "ben"
        strings[i][len(strings[i])-1] = "zhong."
    else:
        strings[i] = "skipped"

for i in strings:
    if i == "skipped":
        print(i)
    else:
        for j in i:
            if j == i[len(i)-1]:
                print(j)
            else:
                print(j, end=" ")
