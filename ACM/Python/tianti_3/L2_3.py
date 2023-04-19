'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-19 01:47:31
LastEditTime: 2023-03-19 02:20:07
FilePath: /ACM/Python/tianti_3/L2_3.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

queue = []
temp = 0
n = int(input())
doors = [[]]*(n+1)
for i in range(1, n+1):
    doors[i] = [int(j) for j in input().split()]
    if doors[i]:
        doors[i].pop(0)
for i in range(len(doors[1])):
    queue.append(doors[1].pop(0))

while queue:
    temp = queue.pop(0)
    if doors[temp]:
        for i in range(len(doors[temp])):
            queue.append(doors[temp].pop(0))

print(temp)
