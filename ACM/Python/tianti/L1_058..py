'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-15 08:12:15
LastEditTime: 2023-03-19 00:11:47
FilePath: /ACM/Python/tianti/L1_058..py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

head = []
tail = []
k=0
print(len(head))
line = input()
for i in range(len(line)):
    if head and i in range(head[k-1],tail[k-1]):
        continue
    if line[i] == "6":
        j=i
        head.append(j)
        while line[j] == "6":
            j += 1
        tail.append(j)
        k+=1
for i in range(len(head)):
    if tail[i]-head[i] > 3 and tail[i]-head[i] <= 9:
        line = line.replace(line[line[i]:tail[i]], "9")
    if tail[i]-head[i] > 9:
        line = line.replace(line[line[i]:tail[i]], "27")
print(line)
