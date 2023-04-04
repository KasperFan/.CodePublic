/*
Name    :   P1425.c
Time    :   2022/10/22 20:45:53
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>

int timer(int n1,int n2);

int a,b,c,d,begin,end;

int main()
{
    scanf("%d%d%d%d",&a,&b,&c,&d);
    begin=timer(a,b);
    end=timer(c,d);
    printf("%d %d\n",(end-begin)/60,(end-begin)%60);
    return 0;
}

int timer(int n1,int n2)
{
    return (n1*60+n2); 
}