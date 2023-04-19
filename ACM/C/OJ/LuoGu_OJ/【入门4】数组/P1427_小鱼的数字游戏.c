/*
Name    :   P1427_小鱼的数字游戏.c
Time    :   2022/11/11 14:34:07
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int num[100];

int main()
{
    for (int i = 99; i >= 0; i--)
    {
        scanf("%d",&num[i]);
        if (num[i]==0) break;
    }
    for (int i = 0; i < 100; i++)
    {
        if (num[i]==0) continue;
        printf("%d ",num[i]);
    }
    
    return 0;
}
