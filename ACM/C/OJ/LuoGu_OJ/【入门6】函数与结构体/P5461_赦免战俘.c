/*
Name    :   P5461_赦免战俘.c
Time    :   2022/11/04 23:09:50
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include<stdio.h>
#include<math.h>

int num[1030][1030];

int main()
{
    int n;
    scanf("%d",&n);
    
    for (int i = 1; i <= pow(2,n); i++)
        num[i][1]=num[i][i]=1;
    
    for (int i = 1; i <= pow(2,n); i++)
        for (int j = 1; j < i; j++)
            num[i][j]=num[i-1][j-1]+num[i-1][j];
    
    for (int i = 1; i <= pow(2,n); i++)
    {
        for (int k = 0; k < pow(2,n)-i; k++)
            printf("0 ");
        for (int j = 1; j <= i; j++)
            {
                if (num[i][j]%2) printf("1 ");
                else printf("0 ");
            }
        putchar('\n');
    }
    return 0;
}
