/*
Name    :   B2129.c
Time    :   2022/10/25 00:41:25
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>

int max(int a,int b,int c);

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double m=(double)max(a,b,c)/(max(a+b,b,c)*max(a,b,b+c));
    printf("%.3lf\n",m);
    return 0;
}

int max(int a,int b,int c)
{
    if (a>b)
    {
        if (a>c) {return a;}
        else return c;
    }
    else if (b>c) {return b;}
    else return c;
}
