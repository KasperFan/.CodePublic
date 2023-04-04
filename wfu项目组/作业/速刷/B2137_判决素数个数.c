/*
Name    :   B2137.c
Time    :   2022/10/30 14:22:21
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

int chuLi(int a,int b)
{
    int cnt=0;
    for (int i = a; i <= b; i++)
    {
        if (i==1 || i==0) continue;
        int j;
        int sk=(int)sqrt(i);
        for (j = 2; j <= sk; j++) if (i%j==0) break;
        if (j>sk) {cnt++;}
    }
    return cnt;
}

int min(int a,int b){return a<b?a:b;}
int max(int a,int b){return a<b?b:a;}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",chuLi(min(a,b),max(a,b)));
    return 0;
}