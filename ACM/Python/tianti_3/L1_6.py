'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-19 00:25:33
LastEditTime: 2023-03-19 00:30:46
FilePath: /ACM/Python/tianti_3/L1_6.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

num = []
ans = []
n = eval(input())
for i in range(n):
    num.append(input())
    left = right = 0
    for j in range(len(num[i])//2):
        left += eval(num[i][j])
        right += eval(num[i][len(num[i])-1-j])
    if left == right:
        ans.append("You are lucky!")
    else:
        ans.append("Wish you good luck.")

for i in ans:
    print(i)
