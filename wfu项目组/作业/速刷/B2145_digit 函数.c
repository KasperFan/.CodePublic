/*
Name    :   B2145.c
Time    :   2022/10/28 00:48:35
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <string.h>

int digit(int n,int k)
{
    char str[11];
    sprintf(str,"%d",n);
    return (int)str[strlen(str)-k];
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d\n",digit(n,k)-48);
    return 0;
}
