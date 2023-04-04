/*
Name    :   P5728【深基5.例5】旗鼓相当的对手.c
Time    :   2022/11/11 15:05:08
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <stdlib.h>
#define N 1010

int score[N][5],sum[N],n,cnt;

int main()
{
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++) 
        {
            scanf("%d",&score[i][j]);
            sum[i]+=score[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (abs(score[i][1] - score[j][1]) <= 5 &&
                abs(score[i][2] - score[j][2]) <= 5 &&
                abs(score[i][3] - score[j][3]) <= 5 &&
                abs(sum[i] - sum[j]) <= 10)
                cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
