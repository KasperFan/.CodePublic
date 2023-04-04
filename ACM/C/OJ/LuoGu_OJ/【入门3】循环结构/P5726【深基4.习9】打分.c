/*
Name    :   P5726【深基4.习9】打分.c
Time    :   2022/11/12 09:07:58
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int score[1000],n,max,min=10,sum;

int main()
{
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&score[i]);
        sum+=score[i];
        max=max>score[i]?max:score[i];
        min=min>score[i]?score[i]:min;
    }
    printf("%.2lf\n",1.0*(sum-max-min)/(n-2));
    return 0;
}
