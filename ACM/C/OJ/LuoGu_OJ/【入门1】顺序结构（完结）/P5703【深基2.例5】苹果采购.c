/*
Name    :   P5703.c
Time    :   2022/10/21 17:40:07
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>

int main()
{
    int a,b,
    *ap,*bp;
    ap=&a,bp=&b;
    scanf("%d%d",ap,bp);
    printf("%d\n",*ap**bp);
    return 0;
}
