/*
Name    :   P1888_三角函数.c
Time    :   2022/11/08 09:40:20
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>
#define ll long long

ll gcd(ll a,ll b) {
    return b > 0 ? gcd(b, a%b) : a;
}

int main()
{
    ll a,b,c,sum,max=0,min=1000000000;
    scanf("%lld%lld%lld",&a,&b,&c);
    max=max<a?a:max; max=max<b?b:max; max=max<c?c:max;
    min=min>a?a:min; min=min>b?b:min; min=min>c?c:min;
    printf("%lld/%lld\n",min/gcd(min,max),max/gcd(min,max));
    return 0;
}
