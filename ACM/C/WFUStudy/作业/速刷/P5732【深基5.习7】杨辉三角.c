/*
Name    :   P5732.c
Time    :   2022/10/24 22:10:56
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>

int num[21][21];

int main()
{
    int n;
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++)
        num[i][1]=num[i][i]=1;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            num[i][j]=num[i-1][j-1]+num[i-1][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",num[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

