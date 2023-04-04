/*
Name    :   P1428_小鱼比可爱.c
Time    :   2022/11/11 14:21:39
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int fish[100],cont[100];

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&fish[i]);
        for (int j = 0; j < i; j++)
            if (fish[j]<fish[i]) cont[i]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i==n-1) printf("%d\n",cont[i]);
        else printf("%d ",cont[i]);
    }
    
    return 0;
}
