/*
Name    :   B2148.c
Time    :   2022/10/27 20:31:13
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

double f(double x,int n)
{
    if (n == 1)
        return x/(n+x);
    else return x/(n+f(x,n-1));
}

int main()
{
    double x;int n;
    scanf("%lf%d",&x,&n);
    printf("%.2lf\n",f(x,n));
    return 0;
}
