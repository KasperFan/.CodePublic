/*
Name    :   P3799.c
Time    :   2022/10/20 07:59:51
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
#define lll long long

int n, num[100000], lenthMax, lenth[5002];
lll cont=0, ser = 1e9+7;

int main()
{
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
        lenth[num[i]]++;
        lenthMax = lenthMax > num[i] ? lenthMax : num[i] ;
    }
    for (int a = 2; a <= lenthMax; a++)
        if (lenth[a] > 1)
        {
            lll cn1 = lenth[a]*(lenth[a]-1)/2 % ser;
            for (int c = 1; c <= a/2; c++)
            {
                if (c != a-c && lenth[c] > 0 && lenth[a-c] >0)
                    cont += cn1*lenth[c]*lenth[a-c] % ser;
                if (c == a-c && lenth[c]>1)
                    cont += cn1*lenth[c]*(lenth[c]-1)/2 % ser;
            }
            cont %= ser;
        }
    
    printf("%lld",cont % ser);
    return 0;
}