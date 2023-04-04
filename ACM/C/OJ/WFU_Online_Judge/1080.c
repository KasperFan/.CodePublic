/*
Name    :   1080.c
Time    :   2022/10/08 11:58:40
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
int main()
{
    long a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);
    for (int x = 2;;x++)
    {
        if (a%x==b%x && a%x==c%x && b%x==c%x)
        {
            printf("%d\n",x);
            break;
        }
    }
    return 0;
}