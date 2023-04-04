/*
Name    :   P1009 [NOIP1998 普及组] 阶乘之和.c
Time    :   2022/11/09 10:51:27
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#define ull unsigned long long

ull jie (ull n){
    if (n<=1) return 1;
    else return n*jie(n-1);
}

int main()
{
    int n;ull S=0ull;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        S+=jie(i);
    }
    printf("%llu\n",S);
    return 0;
}

