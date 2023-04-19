'''
Author: KasperFan && fanwlx@foxmail.com
Date: 2023-03-12 01:44:29
LastEditTime: 2023-03-12 20:22:54
FilePath: /.code/tianti_2/L2_1.py
Description: This file is created for learning Code.
Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
'''

def main():
    n = eval(input())
    list = [eval(i) for i in input().split()]
    op = [i for i in input().split()]
    while len(op) != 0 and len(list) != 1:
        n1 = list.pop(len(list)-1)
        n2 = list.pop(len(list)-1)
        opt = op.pop(len(op)-1)
        if opt == "+":
            list.append(n2+n1)
        elif opt == "-":
            list.append(n2-n1)
        elif opt == "*":
            list.append(n2*n1)
        elif opt == "/":
            if n1 != 0:
                list.append(n2//n1)
            else:
                print(f"ERROR: {n2}/0")
                return
    print(list[0])
    return

main()
