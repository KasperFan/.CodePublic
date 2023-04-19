/*
Name    :   P1035 [NOIP2002 普及组] 级数求和.c
Time    :   2022/11/09 11:30:58
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int k,n;
    double Sn=0.0;
    scanf("%d",&k);
    for ( n = 1; ; n++)
    {
        Sn+=1.0/n;
        if (Sn>k*1.0) break;
    }
    printf("%d\n",n);
    return 0;
}
