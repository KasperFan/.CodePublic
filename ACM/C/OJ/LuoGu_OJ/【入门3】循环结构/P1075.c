/*
Name    :   P1075 [NOIP2012 普及组] 质因数分解.c
Time    :   2022/11/10 21:03:05
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int isPrime(int k){
    int i;
    for ( i = 2; i*i <= k; i++) if (k%i==0) break;
    if (i*i>k) return 1;
    else return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 2; i*i <= n; i++)
    {
        if (!isPrime(i)) continue;
        if (n%i==0 && isPrime(n/i)) {
            printf("%d\n",n/i);
            break;
        }
    }
    return 0;
}
