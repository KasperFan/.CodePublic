/*
Name    :   P5720【深基4.例4】一尺之棰.c
Time    :   2022/11/09 10:38:27
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for ( i = 1; n > 1; i++) n/=2;
    printf("%d\n",i);
    return 0;
}
