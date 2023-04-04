/*
Name    :   P1217 [USACO1.5]回文质数 Prime Palindromes.c
Time    :   2022/11/09 22:46:22
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int isPrime(int k){
    int i;
    for ( i = 2; i * i <= k; i++) if (k % i == 0) return 0;
    return 1;
}
int isPalin(int k){
    int temp, x = 0;
    temp = k;
    while (temp > 0)
    {
        x = x * 10 + temp % 10;
        temp /= 10;
    }
    if (k == x)
        return 1;
    else
        return 0;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        //if (i>10000000) break;
        if (isPalin(i)) if (isPrime(i)) printf("%d ",i);
    }
    printf("\n");
    return 0;
}
