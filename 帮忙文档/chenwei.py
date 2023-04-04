#!/opt/homebrew/bin/python3
# -*- encoding: utf-8 -*-

'''
Name    :   chenwei.py
Time    :   2022/11/16 00:30:57
Author  :   如往
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Python.
'''

# n=int(input())
# if n%3==2 and n%5==3 and n%7==2 :
#     print('Yes')

for i in range (1,10):
    for j in range (1,10-i):   #将4、5行注释后得到左对齐结果
        print('\t',end='')
    for j in range (1,i+1):
        print('{}*{}={}\t'.format(j,i,i*j),end='')
    print()
