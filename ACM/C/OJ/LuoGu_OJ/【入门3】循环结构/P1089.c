/*
Name    :   P1089 [NOIP2004 提高组] 津津的储蓄计划.c
Time    :   2022/11/12 10:19:22
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int money,outMonth,cost,bank,flag=1;

int main()
{
    for (int i = 1; i <= 12; i++)
    {
        money+=300;
        scanf("%d",&cost);
        money-=cost;
        if (money<0)
        {
            outMonth=i;
            flag=0;
            break;
        }
        else bank+=100*(money/100);
        money%=100;
    }
    if (flag)
    {
        printf("%d\n",(int)(bank*1.2)+money);
    }
    else printf("-%d\n",outMonth);
    return 0;
}
