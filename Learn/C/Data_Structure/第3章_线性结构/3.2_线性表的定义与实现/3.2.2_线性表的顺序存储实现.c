/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-09 10:33:07
 * @LastEditTime: 2023-03-09 10:56:16
 * @FilePath: /.code/C/Data_Structure/3.2_线性表的定义与实现/3.2.2_线性表的顺序存储实现.c
 * @Description: This file is created for learning Code.
 *
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved.
 * @description:
 */
#include <stdio.h>
#include <stdlib.h>
const MAXSIZE = 10000;

typedef int ElementType;

typedef int Position;

typedef struct LNode *PtrToLNode;
struct LNode
{
    ElementType Data[MAXSIZE];
    Position Last;
};
typedef PtrToLNode List;

// 3.1 顺序表的初始化
List MakeEmpty()
{
    List L;
    L = (List)malloc(sizeof(struct LNode));
    L->Last = -1;
    return L;
}

// 3.2 顺序表的查找
#define ERROR -1 /* 将错误信息ERROR的值定义为任一负数都可以 */

Position Find(List L, ElementType x)
{
    Position i = 0;
    while (i <= L->Last && L->Data[i] != x)
        i++;
    if (i > L->Last)
        return ERROR; /* 如果没找到，返回错误信息 */
    else
        return i; /* 找到后返回的是存储信息 */
}
