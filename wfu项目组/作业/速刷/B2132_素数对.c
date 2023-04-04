/*
Name    :   B2132.c
Time    :   2022/10/28 01:19:17
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

void chuLi(int a,int arr[])
{
    int k=0;
    for (int i = 2; i <= a; i++)
    {
        int j;
        int sk=(int)sqrt(i);
        for (j = 2; j <= sk; j++) if (i%j==0) break;
        if (j>sk) {arr[i]++;}
    }
    for (int i = 0; i <= a; i++) 
    {
        if (arr[i]>0 && arr[i+2]>0) { printf("%d %d\n",i,i+2);k++;}
    }
    if (k == 0) printf("empty\n");
}

int n;int a[10000];

int main()
{
    scanf("%d",&n);
    chuLi(n,a);
    return 0;
}
