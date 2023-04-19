/*
Name    :   B2005.c
Time    :   2022/10/09 11:54:53
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
int main()
{
    char ch;
    ch=getchar();
    for (int i = 1; i <= 3; i++)
    {
        for (int a = 2; a >= i; a--)
        {
            printf(" ");
        }
        for (int k = 1;k < (i*2);k++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
