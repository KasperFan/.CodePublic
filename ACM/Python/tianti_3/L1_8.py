'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-19 00:50:16
LastEditTime: 2023-03-19 01:30:53
FilePath: /ACM/Python/tianti_3/L1_8.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''
import re

n = eval(input())
put = []
for _ in range(n):
    text = input()
    put.append(text)
    # text = re.sub(' +', ' ', text)
    text = " ".join(text.split())
    text = re.sub(' +(\\W)', '\\1', text)
    for i in text:
        if i != "I":
            text = text.replace(i, i.lower())
    text = re.sub('\\bcan you\\b', 'AAA', text)
    text = re.sub('\\bcould you\\b', 'BBB', text)
    text = re.sub('\\b(I|me)\\b', 'CCC', text)
    text = re.sub('AAA', 'I can', text)
    text = re.sub('BBB', 'I could', text)
    text = re.sub('CCC', 'you', text)
    text = re.sub('\\?', '!', text)
    text = "AI: "+text
    put.append(text)

for i in put:
    print(i)
