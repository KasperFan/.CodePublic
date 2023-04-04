/*
Name    :   B2146.c
Time    :   2022/10/27 20:36:17
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int h(int n,double x)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return 2*x;
    else return 2*x*h(n-1,x)-2*(n-1)*h(n-2,x);
}

int main()
{
    int n;double x;
    scanf("%d%lf",&n,&x);
    printf("%d\n",h(n,x));
    return 0;
}
