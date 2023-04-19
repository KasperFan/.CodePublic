/*
Name    :   1075.c
Time    :   2022/10/23 20:11:54
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>

int m,n,u=0;

int main()
{
    scanf_s("%d%d",&m,&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i] <= m)
        {
            m-=arr[i];
        }else 
            u++;
    }
    printf("%d\n",u);
    return 0;
}