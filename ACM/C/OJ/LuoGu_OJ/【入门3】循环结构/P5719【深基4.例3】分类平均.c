/*
Name    :   P5719【深基4.例3】分类平均.c
Time    :   2022/11/09 10:32:09
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n,k,suma=0,ca=0,sumb=0,cb=0;
    scanf("%d%d",&n,&k);
    for (int i = 1; i <= n; i++)
    {
        if (i%k==0) { suma+=i; ca++;}
        else { sumb+=i; cb++;}
    }
    printf("%.1lf %.1lf\n",1.0*suma/ca,1.0*sumb/cb);
    return 0;
}
