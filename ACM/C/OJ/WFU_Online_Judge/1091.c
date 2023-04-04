/*
Name    :   1091.c
Time    :   2022/10/23 19:48:18
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>

int jieCheng(int n);

int n,sum=0;

int main()
{
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum+=jieCheng(i);
    }
    printf("%d\n",sum);
    return 0;
}

int jieCheng(int n)
{
    if (n==1)
        return 1;
    else return n*jieCheng(n-1);
}