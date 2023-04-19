/*
Name    :   1014.c
Time    :   2022/10/08 11:49:09
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
#define PI 3.14159
int main()
{
    double r;
    scanf("%lf",&r);
    printf("%.4lf %.4lf %.4lf\n",r*2,2*r*PI,r*r*PI);
    return 0;
}