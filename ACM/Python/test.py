##!/opt/homebrew/bin/python3
# -*- encoding: utf-8 -*-
'''
Name    :   test.py
Time    :   2022/12/26 15:41:55
Author  :   如往
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Python.
'''

# import turtle as t


# t.circle(50)
# t.circle(50, steps=6)

# t.penup()
# t.goto(100, 0)
# t.pendown()
# t.circle(50, 180)
# t.forward(8)
# t.delay(delay=None)
# t.done()

import turtle as t
#t.speed(0)

# 花柄
t.penup()
t.goto(0, -150)
t.pendown()
t.pensize(2)
t.setheading(90)
t.color('brown')
t.fd(300)

# 花瓣
t.pensize(1)
t.color('black', 'red')
t.begin_fill()
for i in range(10):
    t.left(45)
    t.circle(80, 60)
    t.left(120)
    t.circle(80, 60)
t.end_fill()

# 叶子
for i in range(2):
    t.penup()
    t.goto(0, 10-50*i)
    x = 20+80*i
    t.setheading(x)
    t.pendown()
    t.color('brown', 'green')
    t.begin_fill()
    t.circle(60, 60)
    t.left(120)
    t.circle(60, 60)
    t.end_fill()
t.hideturtle()

t.done()