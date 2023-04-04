/*
Name    :   P1579 哥德巴赫猜想（升级版）.c
Time    :   2022/11/06 10:42:41
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

int isPrime (int t){
    int i,sk=(int)sqrt(t);
    for ( i = 2; i <= sk; i++) {
        if (t%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if (!isPrime(i)) continue;
        for (int j = 2; j < n; j++)
        {
            if (!isPrime(j)) continue;
            int k = n-i-j;
            if (isPrime(k)) {
            printf("%d %d %d\n",i,j,k);return 0;
            }
        }
    }
}

