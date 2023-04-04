'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-19 00:32:06
LastEditTime: 2023-03-19 00:54:21
FilePath: /ACM/Python/tianti_3/L1_7.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved.
'''


class Baby(object):
    def __init__(self, sex, height, weight) -> None:
        self.sex = sex
        self.height = height
        self.weight = weight


n = eval(input())
ans = []
text = ""
Babys = [Baby(*input().split()) for _ in range(n)]
for i in Babys:
    if i.sex == "1":
        if int(i.height) < 130:
            text += "duo chi yu!"
        elif int(i.height) > 130:
            text += "ni li hai!"
        else:
            text += "wan mei!"
        text += " "
        if int(i.weight) < 27:
            text += "duo chi rou!"
        elif int(i.weight) > 27:
            text += "shao chi rou!"
        else:
            text += "wan mei!"
    else:
        if int(i.height) < 129:
            text += "duo chi yu!"
        elif int(i.height) > 129:
            text += "ni li hai!"
        else:
            text += "wan mei!"
        text += " "
        if int(i.weight) < 25:
            text += "duo chi rou!"
        elif int(i.weight) > 25:
            text += "shao chi rou!"
        else:
            text += "wan mei!"
    ans.append(text)
    text = ""

for i in ans:
    print(i)
