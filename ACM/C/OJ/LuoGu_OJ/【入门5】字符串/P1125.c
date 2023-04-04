/*
Name    :   P1125_[NOIP2008 提高组]_笨小猴.c
Time    :   2022/11/06 19:37:59
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <string.h>

char ch[102];int sum[26],maxn,minn=100;

int isPrime (int k)
{
    if (k==0 || k==1) return 0;
    for (int i = 2; i*i < k; i++)
        if (k%i==0) return 0;
    return 1;
}

int main()
{
    scanf("%s",ch);
    for (int i = 0; i < strlen(ch); i++) sum[ch[i]-'a']++;
    for (int i = 0; i < 26; i++)
    {
        maxn = maxn<sum[i] ? sum[i] : maxn;
        if (sum[i]!=0) minn = minn>sum[i] ? sum[i] : minn;
    }
    if (isPrime(maxn-minn)) printf("Lucky Word\n%d\n",maxn-minn);
    else printf("No Answer\n0\n");
    return 0;
}
