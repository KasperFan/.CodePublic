/*
Name    :   1003.c
Time    :   2022/10/06 20:45:07
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
    printf("%8d %8d %8d\n",num[0],num[1],num[2]);
    return 0;
}