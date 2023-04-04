/*
Name    :   P5704.c
Time    :   2022/10/21 17:49:05
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
    ch-=('a'-'A');
    putchar(ch);
    return 0;
}
