'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-18 20:10:03
LastEditTime: 2023-03-18 22:12:54
FilePath: /ACM/CodeForces/WalkMaster.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''


def dfs(a, b, c, d):
    if d < b or d < c+b-a:
        return -1
    else:
        if a == c and b == d:
            return 0
        else:
            if a > c and b == d:
                return abs(a-c)
            elif a == c and d == b+1:
                return 2
            else:
                return (d-b)+dfs(a+(d-b), b+(d-b), c, d)


t = eval(input())
point = []
for _ in range(t):
    a, b, c, d = map(int, input().split())
    point.append(dfs(a, b, c, d))

for i in point:
    print(i)
