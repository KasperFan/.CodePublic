/*
Name    :   P5739.c
Time    :   2022/10/18 15:52:51
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>

int jie(int n)
{
    if(n<=1)
        return 1;
    return n*jie(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",jie(n));
    return 0;
}