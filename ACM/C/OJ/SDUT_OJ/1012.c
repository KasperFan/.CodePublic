/*
Name    :   1012.c
Time    :   2022/10/05 11:46:05
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
        if (a==0 && b==0)
        {
            break;
        }
        printf("%d\n",a+b);
    }
    return 0;
}
