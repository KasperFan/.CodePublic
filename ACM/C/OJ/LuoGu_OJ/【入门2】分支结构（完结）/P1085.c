/*
Name    :   P1085.c
Time    :   2022/11/03 17:02:25
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int a,b,ang=0,day;
    for (int i = 1; i <= 7; i++)
    {
        scanf("%d%d",&a,&b);
        if (ang<a+b) { ang=a+b; day=i;}
    }
    if (ang>8) printf("%d\n",day);
    else printf("0\n");
    return 0;
}
