/*
Name    :   B2133.c
Time    :   2022/10/30 14:04:45
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i < 10000; i++)
        for (int j = 1; j <= i; j++)
            if (i*(1+i)/2-3*j == n) {
                printf("%d %d",j,i); return 0;}
}
