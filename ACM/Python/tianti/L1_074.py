#!/opt/homebrew/bin/python3
# -*- encoding: utf-8 -*-

'''
Name    :   L1_074.py
Time    :   2023/03/06 08:11:22
Author  :   如往
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Python.
'''

N, K ,M = map(int, input().split())
print(N - K * M, end = '')