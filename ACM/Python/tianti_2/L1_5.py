'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-11 23:35:41
LastEditTime: 2023-03-12 00:24:02
FilePath: /.code/tianti_2/L1_5.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

max = 0
point = 0
cnt = 0
flag = True
data = [eval(i) for i in input().split()]
btn = data.pop(len(data)-1)
lowest = data.pop(len(data)-1)

for i in range(len(data)):
    if max < data[i]:
        max = data[i]

for i in range(len(data)):
    if (abs(data[i]-max) > btn or data[i] < lowest) and flag:
        flag = False
        point = i+1
        cnt += 1
    elif abs(data[i]-max) > btn or data[i] < lowest:
        cnt += 1

if cnt == 0:
    print("Normal")
elif cnt < 2:
    print("Warning: please check #%d!" % point)
else:
    print("Warning: please check all the tires!")
