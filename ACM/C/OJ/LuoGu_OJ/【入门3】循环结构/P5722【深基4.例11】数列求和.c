/*
Name    :   P5722【深基4.例11】数列求和.c
Time    :   2022/11/09 22:19:09
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) sum+=i;
    printf("%d\n",sum);
    return 0;
}
