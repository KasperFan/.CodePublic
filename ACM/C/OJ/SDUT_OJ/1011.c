/*
Name    :   1011.c
Time    :   2022/10/05 11:39:39
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}
