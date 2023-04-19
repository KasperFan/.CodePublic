/*
Name    :   B2147.c
Time    :   2022/10/27 20:20:29
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

double f(double x,int n)
{
    if (n == 1)
        return sqrt(1+x);
    else return sqrt(n+f(x,n-1));
}

int main()
{
    double x;int n;
    scanf("%lf%d",&x,&n);
    printf("%.2lf\n",f(x,n));
    return 0;
}
