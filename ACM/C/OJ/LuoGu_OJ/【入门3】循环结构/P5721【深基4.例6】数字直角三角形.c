/*
Name    :   P5721【深基4.例6】数字直角三角形.c
Time    :   2022/11/09 10:41:21
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for ( i = n; i > 0; i--)
    {
        for ( j = 0; j < i; j++) { printf("%02d",k); k++;}
        printf("\n");
    }
    return 0;
}
