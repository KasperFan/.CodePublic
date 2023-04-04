/*
Name    :   1006.c
Time    :   2022/10/08 10:46:46
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
char num[1000000];

int main()
{
    scanf("%s",num);
    if (num[0]!='-')
        printf("-%s\n",num);
    else 
        printf("%s\n",num);
    return 0;
}