/*
Name    :   花车颠呀颠，纳西妲睁开眼.c
Time    :   2022/10/31 16:27:33
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

int isSu (int x)
{
    int i;
    for ( i = 2; i <= (int)sqrt(x); i++) if (x%i==0) break;
    if (i>(int)sqrt(x)) return 1;
    else return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
        for (int j = 2; j < 100000; j++)
            if (isSu(j)==1 && isSu(x[i]+j)!=1) { y[i]=j; break;}
    }
    for (int i = 0; i < n; i++) printf("%d\n",y[i]);
    return 0;
}
