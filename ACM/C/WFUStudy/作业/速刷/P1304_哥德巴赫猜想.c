/*
Name    :   P1304.c
Time    :   2022/10/30 02:09:54
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

int zhiShu(int k)
{
    int i;
    int sk=(int)sqrt(k);
    for ( i = 2; i <= sk; i++) if (k%i==0) break;
    if (i>sk) return 1;
    else return 0;
}

void chuLi(int N)
{
    for (int j = 4; j <= N; j++)
        if (j%2==0)
            for (int k = 2; k < j; k++)
                if (zhiShu(k)==1 && zhiShu(j-k)==1)
                {
                    printf("%d=%d+%d\n",j,k,j-k);
                    break;
                }
}

int main()
{
    int N;
    scanf("%d",&N);
    chuLi(N);
    return 0;
}
