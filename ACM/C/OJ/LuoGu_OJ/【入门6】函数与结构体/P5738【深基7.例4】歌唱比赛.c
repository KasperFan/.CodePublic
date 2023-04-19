/*
Name    :   P5738【深基7.例4】歌唱比赛.c
Time    :   2022/11/04 19:49:27
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int score[n][m];double average=0;
    for (int i = 0; i < n; i++)
    {
        int max=0,min=10,final=0;
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&score[i][j]);
            max=max<score[i][j]?score[i][j]:max;
            min=min>score[i][j]?score[i][j]:min;
            final+=score[i][j];
        }
        average=average>(double)(final-max-min)/(m-2)?average:(double)(final-max-min)/(m-2);
    }
    printf("%.2lf\n",average);
    return 0;
}
