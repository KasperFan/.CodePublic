'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-19 00:04:26
LastEditTime: 2023-03-19 01:39:10
FilePath: /ACM/Python/tianti_3/L1_2.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

import re

text = input()
rule1 = r"[6]{10,}"
rule2 = r"[6]{4,}"
text = re.sub(rule1, "27", text)
text = re.sub(rule2, "9", text)
print(text)
