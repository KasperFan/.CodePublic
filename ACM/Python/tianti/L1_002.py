'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-13 12:24:28
LastEditTime: 2023-03-14 12:25:24
FilePath: /.code/tianti/L1_002.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''


n, ch = input().split()
n = eval(n)
step = 0
while n >= 2 * step*step - 1:
    step += 1
if n < 2 * step*step - 1:
    step -= 1

for i in range(2 * step - 1, 0, -2):
    for j in range((2*step-1-i)//2):
        print(" ", end="")
    for j in range(i):
        print(ch, end="")
        n -= 1
    print()

for i in range(3, 2 * step + 1, 2):
    for j in range((2*step-1-i)//2):
        print(" ", end="")
    for j in range(i):
        print(ch, end="")
        n -= 1
    print()

print(n)
