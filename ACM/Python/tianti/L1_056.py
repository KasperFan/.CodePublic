'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-15 00:46:27
LastEditTime: 2023-03-15 08:08:47
FilePath: /.code/tianti/L1_056.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''


class People:
    def __init__(self, name, num):
        self.name = name
        self.num = num


N = eval(input())
my_people = []
for i in range(N):
    namex, numx = input().split()
    numx = eval(numx)
    my_people.append(People(name=namex, num=numx))
max = ave = 0
for i in range(N):
    max = max if max > my_people[i].num else my_people[i].num
    ave += my_people[i].num
ave //= N*2
ans = max
for i in my_people:
    ans = ans if abs(ans-ave) < abs(i.num-ave) else i.num
print(ave, end=" ")
for i in my_people:
    if i.num == ans:
        print(i.name)
