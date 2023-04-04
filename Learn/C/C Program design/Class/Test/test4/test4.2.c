/*
Name    :   test4.2.c
Time    :   2022/10/05 16:26:00
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/
#include<stdio.h>
int main()
{
    int a,b;
    for ( b = 1; b < 10; b++)
    {
        // for (int i = 9; i > b; i--)
        //     printf("\t");
        for ( a = 1; a <= b; a++)
        {
            printf("%d*%d=%d",a,b,a*b);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}