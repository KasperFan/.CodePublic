/*
Name    :   1000.c
Time    :   2022/10/06 20:35:27
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
int main()
{
    int a,b;
    while (scanf("%d %d",&a,&b) != EOF)
    {
        printf("%d",a+b);
    }
    return 0;
}