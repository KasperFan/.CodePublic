/*
Name    :   P5727【深基5.例3】冰雹猜想.c
Time    :   2022/11/11 14:53:15
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n,num[1000],i;
    scanf("%d",&n);
    num[0]=n;
    for ( i = 1; ; i++)
    {
        if (n==1) break;
        if (n%2) n=n*3+1;
        else n /= 2;
        num[i]=n;
    }
    for (int j = i-1; j >= 0; j--) printf("%d ",num[j]);
    return 0;
}
