/*
Name    :   P1720_月落乌啼算钱（斐波那契数列）.c
Time    :   2022/11/10 10:50:50
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double Fn;
    scanf("%d",&n);
    Fn=(pow((1+sqrt(5))/2,n)-pow(((1-sqrt(5))/2),n))/sqrt(5);
    printf("%.2lf\n",Fn);
    return 0;
}
