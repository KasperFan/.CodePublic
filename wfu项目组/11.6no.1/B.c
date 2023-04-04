/*
Name    :   B.c
Time    :   2022/11/06 11:05:27
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int ifuse[10],a,b,c,cont;

void jieXi (int x,int ifuse[]){
    for (int i = 0; i < 3; i++)
    {
        ifuse[x%10]++;
        x/=10;
    }
}

int main()
{
    scanf("%d%d%d",&a,&b,&c);
    for (int i = 100; i <= 1000/c; i++)
    {
        int nA=i*a,nB=i*b,nC=i*c;
        if (nC>1000) break;
        jieXi(nA,ifuse);
        jieXi(nB,ifuse);
        jieXi(nC,ifuse);
        for (int j = 1; j < 10; j++) 
            if (ifuse[i]!=1)
                for (int k = 1; k <= 9; k++) { ifuse[k]=0; goto loop;}
        printf("%d %d %d",nA,nB,nC);
        cont++;
        loop:;
    }
    
    return 0;
}
