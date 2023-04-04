/*
Name    :   她说刚刚做了梦.c
Time    :   2022/10/31 16:42:10
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>
#define ul unsigned long

int n; 

int isSu (ul x)
{
    ul i;
    for ( i = 2; i <= (ull)sqrt(x); i++) if (x%i==0) break;
    if (i>(int)sqrt(x)) return 1;
    else return 0;
}

int main()
{
    scanf("%d",&n);
    ul num[n];int cont;
    for (int i = 0; i < n; i++)
    {
        scanf("%lu",&num[i]);
    }
    return 0;
}
