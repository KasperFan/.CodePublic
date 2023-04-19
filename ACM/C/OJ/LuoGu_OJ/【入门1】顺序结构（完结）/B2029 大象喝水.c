/*
Name    :   B2029.c
Time    :   2022/10/22 20:40:52
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
#include<math.h>

int h,r;

int main()
{
    scanf("%d%d",&h,&r);
    int v=3.14*pow(r,2)*h;
    printf("%d\n",(20*1000)/v+1);
    return 0;
}
