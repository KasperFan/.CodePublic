/*
Name    :   P5708.c
Time    :   2022/10/22 20:07:47
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double p=(a+b+c)/2;
    printf("%.1lf\n",sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}
