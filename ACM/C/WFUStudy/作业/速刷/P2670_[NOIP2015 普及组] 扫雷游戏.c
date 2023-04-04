/*
Name    :   P2670.c
Time    :   2022/10/30 17:26:26
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int n,m,map[102][102];

int main()
{
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++)
    {
        char str[m+2];
        scanf("%s",str);
        for (int j = 1; j <= m; j++)
        {
            if (str[j-1]=='*') map[i][j]+=10;
            if (str[j-1]=='?') map[i][j]+=0;
            if (map[i][j]>9)
            {
                map[i-1][j-1]++;
                map[i-1][j]++;
                map[i-1][j+1]++;
                map[i][j-1]++;
                map[i][j+1]++;
                map[i+1][j-1]++;
                map[i+1][j]++;
                map[i+1][j+1]++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (map[i][j]>=10) printf("*");
            else printf("%d",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
