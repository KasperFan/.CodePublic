'''
Name    :   aaaa.py
Time    :   2022/09/23 15:33:37
Author  :   如往
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Python.
'''

import random

r = random.randint(0, 100)
N = 1
print('*********8*********')
while True:
    x = int(input('请输入您猜测的数字'))
    if x > r:
        print('遗憾，您输入的数字太大了')
        N = N+1
    elif x < r:
        print('遗憾，您输入的数字太小了')
        N = N+1
    else:
        print('预测了{}次，你猜对了'.format(N))
        break
