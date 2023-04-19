/*
Name    :   P5723【深基4.例13】质数口袋.c
Time    :   2022/11/09 14:12:16
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int l,sum=0,cont=0;
    scanf("%d",&l);
    for (int i = 2; i <= l; i++)
    {
        if (sum+i>l) break;
        int j;
        for ( j = 2; j*j <= i; j++)
            if (i%j==0) break;
        if (j*j>i) { sum+=i; cont++; printf("%d\n",i);}
    }
    printf("%d\n",cont);
    return 0;
}
