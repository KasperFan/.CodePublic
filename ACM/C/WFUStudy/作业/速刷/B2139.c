/*
Name    :   B2139.c
Time    :   2022/10/28 02:13:01
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int num[100010];

int isSu (int x)
{
    int i;
    for ( i = 2; i <= (int)sqrt(x); i++) if (x%i==0) break;
    if (i>(int)sqrt(x)) return 1;
    else return 0;
}

int fanZhuan(int x)
{
    int s;
    char str1[100010],str2[100010];
    sprintf(str1,"%d",x);
    for (int i = 0; i < strlen(str1); i++)
        str2[i]=str1[strlen(str1)-1-i];
    sscanf(str2,"%d",&s);
    return s;
}

int chuLi(int m,int n,int num[])
{
    int jiShu=0;
    for (int i = m; i <= n; i++)
        if (isSu(i)==1 && isSu(fanZhuan(i))==1) {num[jiShu]=i;jiShu++;}
    return jiShu;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int c=chuLi(m,n,num);
    for (int i = 0; i < c; i++)
    {
        if (i<c-1) printf("%d,",num[i]);
        else printf("%d\n",num[i]);
    }
    return 0;
}




