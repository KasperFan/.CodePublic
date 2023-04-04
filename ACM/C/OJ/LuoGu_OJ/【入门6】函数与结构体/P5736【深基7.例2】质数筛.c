/*
Name    :   P5736【深基7.例2】质数筛.c
Time    :   2022/11/04 19:24:49
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
int num1[100000],num2[100000];

int isSu(int k){
    int i;
    for ( i = 2; i*i <= k; i++) if (k%i==0) break;
    if (i*i>k) return 1;
    else return 0;
}

int main()
{
    int n,k=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num1[i]);
        if (isSu(num1[i])==1 && num1[i]!=1)
        {
            num2[k]=num1[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
        printf("%d ",num2[i]);
    return 0;
}
