/*
Name    :   1002.c
Time    :   2022/10/06 20:37:45
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
int main()
{
    int num[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("%d\n",num[1]);
    return 0;
}