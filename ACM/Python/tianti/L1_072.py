'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-13 20:50:32
LastEditTime: 2023-03-14 01:53:06
FilePath: /.code/tianti/L1_072.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

final = [10000, 36, 720, 360, 80, 252, 108, 72, 54,
         180, 72, 180, 119, 36, 306, 1080, 144, 1800, 3600]
list = [[]*3]*3
temp = []
chk = 45
for i in range(3):
    # for j in list[i]:
    list[i] = [eval(j) for j in input().split()]
    for j in list[i]:
        chk -= j

for i in range(3):
    for j in range(3):
        if list[i][j] == 0:
            list[i][j] = chk

for i in range(3):
    a, b = map(int, input().split())
    temp.append(list[a-1][b-1])

choice = eval(input())
if choice >= 1 and choice <= 3:
    ans = list[choice-1][0] + list[choice-1][1] + list[choice-1][2]
elif choice >= 4 and choice <= 6:
    ans = list[0][choice-4] + list[1][choice-4] + list[2][choice-4]
elif choice == 7:
    ans = list[0][0] + list[1][1] + list[2][2]
elif choice == 8:
    ans = list[0][2] + list[1][1] + list[2][0]

for i in temp:
    print(i)

print(final[ans-6])
