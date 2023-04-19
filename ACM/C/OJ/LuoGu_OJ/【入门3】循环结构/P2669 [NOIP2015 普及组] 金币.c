/*
Name    :   P2669 [NOIP2015 普及组] 金币.c
Time    :   2022/11/09 23:15:17
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int k,coin=0;
    scanf("%d",&k);
    for (int i = 1; ; i++)
    {
        if (i>k) { coin+=i*k; break;}
        else { k-=i; coin+=i*i;}
    }
    printf("%d\n",coin);
    return 0;
}
