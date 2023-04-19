/*
Name    :   P5725【深基4.习8】求三角形.c
Time    :   2022/11/12 00:22:18
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int n,s;

int main()
{
    scanf("%d",&n);
    s=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) { printf("%02d",s); s++;}
        printf("\n");
    }
    s=1;
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1+i; j--) printf("  ");
        for (int j = 0; j < i; j++) { printf("%02d",s++);}
        printf("\n");
    }
    return 0;
}
