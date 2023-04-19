/*
Name    :   1011.c
Time    :   2022/10/23 17:09:36
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>

int _a,_b;

int main()
{
    scanf("%d%d",&_a,&_b);
    double c = (double)_b/_a;
    printf("%.3lf%%",c*100);
    return 0;
}