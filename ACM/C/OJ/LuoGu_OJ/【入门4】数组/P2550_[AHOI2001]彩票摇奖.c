/*
Name    :   P2550 [AHOI2001]彩票摇奖.c
Time    :   2022/11/13 18:45:36
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int num[7],price[7],cont[8];

int main()
{
    int n,cnt;
    scanf("%d",&n);
    for (int i = 0; i < 7; i++) scanf("%d",&price[i]);
    for (int i = 0; i < n; i++)
    {
        cnt=0;
        for (int j = 0; j < 7; j++)
        {
            scanf("%d",&num[j]);
            for (int k = 0; k < 7; k++) if (num[j]==price[k]) cnt++;
        }
        cont[cnt]++;
    }
    for (int i = 7; i >= 1; i--)
    {
        printf("%d ",cont[i]);
    }
    return 0;
}
