/*
Name    :   P5724 【深基4.习5】求极差 / 最大跨度值.c
Time    :   2022/11/10 11:13:15
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n,max=0,min=1000;
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
        min=min>num[i]?num[i]:min;
        max=max<num[i]?num[i]:max;
    }
    printf("%d\n",max-min);
    return 0;
}
