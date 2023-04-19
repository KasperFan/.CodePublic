/*
Name    :   B2138.c
Time    :   2022/10/28 08:30:12
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

int zhiShu(int r)
{
    int s;
    int sk=(int)sqrt(r);
    for ( s = 2; s <= sk; s++) if (r%s==0) break;
    if (s>sk) return 1;//是质数
    else return 0;//bu是质数
}

void chuLi(int m)//接入第n个数
{
    if (zhiShu(m)==1) printf("%d",m);
    else
    {
        for (int i = m-1; i >= 2; i--)
            if (m%i==0 && zhiShu(i)==1) { printf("%d",i); break;}
    }
}

void check(int a,int b)
{
    for (int i = a; i <= b; i++)
    {
        if (i<b) {chuLi(i); printf(",");}
        else {chuLi(i); printf("\n");}
    }
}

int main()
{
    int m, n;
    scanf("%d%d",&m,&n);
    check(m,n);
    return 0;
}



