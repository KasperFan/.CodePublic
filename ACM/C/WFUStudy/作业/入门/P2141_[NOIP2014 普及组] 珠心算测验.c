/*
Name    :   P2141.c
Time    :   2022/10/18 19:41:16
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
int n,
    q=0,
    cc[100];
int main()
{
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
        cc[i]=1;
    }
    for (int a = 0; a < n; a++)
        for (int b = a+1; b < n; b++)
            for (int k = 0; k < n; k++)
                if (num[k]==num[a]+num[b] && cc[k]==1)
                {
                    q++;
                    cc[k]=0;
                }
    printf("%d\n",q);
    return 0;
}
