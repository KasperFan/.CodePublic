/*
Name    :   P1909 [NOIP2016 普及组] 买铅笔.c
Time    :   2022/11/03 17:11:40
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int n,price,num,allCost,all,cost=999999999;

int main()
{
    scanf("%d",&n);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d%d",&num,&price);
        allCost=price;all=num;
        while (all<n) {all*=2;allCost*=2;}
        while (all>n) {all-=num;allCost-=price;}
        while (all<n) {all+=num;allCost+=price;}
        cost=cost<allCost?cost:allCost;
    }
    printf("%d\n",cost);
    return 0;
}
