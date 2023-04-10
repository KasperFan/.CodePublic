'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-04-05 00:21:53
LastEditTime: 2023-04-06 10:41:02
FilePath: /Learn/Python/死锁复现.py
describes: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''
import threading

# 创建两个锁
lock1 = threading.Lock()
lock2 = threading.Lock()

# 定义第一个线程函数


def thread1():
    # 获取锁1
    lock1.acquire()
    print("Thread 1 acquires lock 1")

    # 模拟计算
    for i in range(100000):
        pass

    # 尝试获取锁2
    print("Thread 1 trying to acquire lock 2")
    lock2.acquire()
    print("Thread 1 acquires lock 2")

    # 释放锁
    lock2.release()
    lock1.release()

# 定义第二个线程函数


def thread2():
    # 获取锁2
    lock2.acquire()
    print("Thread 2 acquires lock 2")

    # 模拟计算
    for i in range(100000):
        pass

    # 尝试获取锁1
    print("Thread 2 trying to acquire lock 1")
    lock1.acquire()
    print("Thread 2 acquires lock 1")

    # 释放锁
    lock1.release()
    lock2.release()


# 创建并启动两个线程
t1 = threading.Thread(target=thread1)
t2 = threading.Thread(target=thread2)
t1.start()
t2.start()

# 等待两个线程结束
t1.join()
t2.join()


# 在上面的代码中，我们创建了两个锁 lock1 和 lock2，
# 以及两个线程函数 thread1 和 thread2。
# thread1 函数先获取 lock1，然后尝试获取 lock2；
# 而 thread2 函数先获取 lock2，然后尝试获取 lock1。
# 由于两个线程都在等待对方释放锁，因此会发生死锁。
