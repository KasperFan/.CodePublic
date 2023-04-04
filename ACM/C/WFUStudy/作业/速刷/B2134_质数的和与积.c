/*
Name    :   B2134.c
Time    :   2022/10/30 14:42:08
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

int zhiShu(int m)
{
    int i;
    int sk=(int)sqrt(m);
    for ( i = 2; i <= sk; i++) if (m%i==0) break;
    if (i>sk) return 1;
    else return 0;
}

void qiuHe(int k)
{
    for (int i = k/2; i >= 1; i--)
        if (zhiShu(i)==1 && zhiShu(k-i)==1) { printf("%d\n",i*(k-i)); break;}
}

int main()
{
    int S;
    scanf("%d",&S);
    qiuHe(S);
    return 0;
}
