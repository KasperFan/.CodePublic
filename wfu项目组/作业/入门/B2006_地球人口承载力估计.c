/*
Name    :   B2006.c
Time    :   2022/10/18 18:30:49
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
int main()
{
    double a,b,x,y;
    scanf("%lf %lf %lf %lf",&x,&a,&y,&b);
    double q = (a*x-b*y)/(a-b);
    printf("%.2lf\n",q);
    return 0;
}
