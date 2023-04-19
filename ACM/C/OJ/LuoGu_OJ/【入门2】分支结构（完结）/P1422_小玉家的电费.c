/*
Name    :   P1422 小玉家的电费.c
Time    :   2022/11/07 22:21:24
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n;
    double cost;
    scanf("%d",&n);
    if (n<=150) cost=n*0.4463;
    else if (n>150 && n<=400) cost=150*0.4463+(n-150)*0.4663;
    else if (n>400) cost=150*0.4463+250*0.4663+(n-400)*0.5663;
    printf("%.1lf\n",cost);
    return 0;
}
