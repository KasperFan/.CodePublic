/*
Name    :   B2064.c
Time    :   2022/10/18 19:02:30
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long k[n];
    for (int i = 0; i < n; i++)
    {
        int kn;
        scanf("%d",&kn);
        long long arr[kn];
        arr[0]=arr[1]=1;
        if (kn == 1)
                k[i]=arr[0];
        else if (kn == 2)
                k[i] = arr[1];
        else for (int a = 3; a <= kn; a++)
            arr[a-1]=arr[a-2]+arr[a-3];
        k[i]=arr[kn-1];
    }
    for (int i = 0; i < n; i++)
        printf("%lld\n",k[i]);
    return 0;
}
