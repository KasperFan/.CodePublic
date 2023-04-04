/*
Name    :   B2136.c
Time    :   2022/10/28 01:34:34
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int huiWen(int i)
{
    char str1[4],str2[4];int l;
    sprintf(str1,"%d",i);
    for (int k = 0; k < strlen(str1); k++)
        str2[strlen(str1)-1-k]=str1[k];
    sscanf(str2,"%d",&l);
    if (suShu(l)==1) return 1;
    
}

int suShu(int a)
{
    int cnt=0;
    for (int i = 11; i <= a; i++)
    {
        int j;
        int sk=(int)sqrt(i);
        for (j = 2; j <= sk; j++) if (i%j==0) break;
        if (j>sk && huiWen(i)==1) {cnt++;}
    }
    return cnt;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",suShu(n));
    return 0;
}
