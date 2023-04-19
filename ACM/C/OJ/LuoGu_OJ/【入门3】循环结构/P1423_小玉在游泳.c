/*
Name    :   P1423 小玉在游泳.c
Time    :   2022/11/10 10:10:45
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int step;
    double s,distance=0.0;
    scanf("%lf",&s);
    for ( step = 0; ; step++)
    {
        if (distance>=s) break;
        distance+=2*pow(0.98,step);
    }
    printf("%d\n",step);
    return 0;
}
