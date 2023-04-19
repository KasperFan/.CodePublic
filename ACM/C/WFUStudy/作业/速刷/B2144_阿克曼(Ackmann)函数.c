/*
Name    :   B2144.c
Time    :   2022/10/28 01:05:42
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int akm(unsigned m,unsigned n)
{
    if (m == 0) return n+1;
    else if (m > 0 && n == 0) return akm(m-1,1);
    else return akm(m-1,akm(m,n-1));
}

int main()
{
    unsigned m, n;
    scanf("%u%u",&m,&n);
    printf("%d\n",akm(m,n));
    return 0;
}
