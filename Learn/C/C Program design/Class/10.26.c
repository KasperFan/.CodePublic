/*
Name    :   10.26.c
Time    :   2022/10/26 11:37:19
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include<stdio.h>

int main()
{
    int score[4][6],
    min[4]={10,10,10,10},
    max[4]={0,0,0,0},
    sum[4]={0,0,0,0};
    double ave[4];
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 6; k++)
        {
            printf("请输入选手%d的成绩%d:",i+1,k+1);
            scanf("%1d",&score[i][k]);
            if (min[i]>score[i][k]) {min[i]=score[i][k];}
            if (max[i]<score[i][k]) {max[i]=score[i][k];}
            sum[i]+=score[i][k];
        }
        ave[i]=(double)(sum[i]-(min[i]+max[i]));
        printf("选手%d最低分:%d\n",i+1,min[i]);
        printf("选手%d最高分:%d\n",i+1,max[i]);
        printf("选手%d总分:%d\n",i+1,sum[i]);
        printf("选手%d平均分:%.2lf\n",i+1,ave[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
    }
    
    return 0;
}