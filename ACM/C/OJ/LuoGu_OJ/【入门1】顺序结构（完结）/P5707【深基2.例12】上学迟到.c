/*
Name    :   P5707.c
Time    :   2022/10/22 20:15:00
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>

int iup(double a,double b);

int main()
{
    double s,v,m;
    scanf("%lf%lf",&s,&v);
    int a,b,
        n=8*60+24*60,
        t=iup(s,v)+10;
    n=n-t;
    if (n>=24*60){n-=24*60;}
    b=n%60;
    a=n/60;
    if (a<10)
    {
        if (b<10){printf("0%d:0%d\n",a,b);}
        else printf("0%d:%d\n",a,b);
    }
    else
    {
        if (b<10) printf("%d:0%d\n",a,b);
        else printf("%d:%d\n",a,b);
    }
    return 0;
}

int iup(double a,double b)
{
    if ((int)a%(int)b != 0)
    {
        return ((int)(a/b)+1);
    }
    else return ((int)(a/b));
}