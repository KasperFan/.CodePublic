/*
Name    :   1062.c
Time    :   2022/10/23 20:01:04
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>

int n,maxium=0;

int max(int a,int b);

int main()
{
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){scanf("%d",&arr[i]);}
    for (int i = 0; i < n; i++){maxium=max(maxium,arr[i]);}
    printf("%d\n",maxium);
    return 0;
}

int max(int a,int b)
{
    if (a>b)
        return a;
    else
        return b;
}