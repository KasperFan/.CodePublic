'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-11 23:48:56
LastEditTime: 2023-03-12 00:09:43
FilePath: /.code/tianti_2/L1_6.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

key = "chi1 huo3 guo1"
flag = 1
point = 0
words = []
check = input()
cnt = 0
while check != ".":
    words.append(check)
    check = input()

for i in range(len(words)):
    if key in words[i] and flag != 0:
        flag = 0
        point = i+1
        cnt += 1
    elif key in words[i]:
        cnt += 1

print(len(words))
if cnt == 0:
    print("-_-#")
else:
    print(f"{point} {cnt}")
