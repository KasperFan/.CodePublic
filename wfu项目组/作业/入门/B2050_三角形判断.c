/*
Name    :   B2050.c
Time    :   2022/10/18 19:36:26
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b)
        printf("%d\n",1);
    else
        printf("%d\n",0);
    return 0;
}
