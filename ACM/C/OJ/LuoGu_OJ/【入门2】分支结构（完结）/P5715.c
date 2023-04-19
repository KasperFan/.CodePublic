/*
Name    :   P5715.c
Time    :   2022/11/03 16:42:13
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    for (int i = 0; i < 3; i++)
    {
        if (a>b) { temp=a; a=b; b=temp;}
        if (b>c) { temp=b; b=c; c=temp;}
        if (a>c) { temp=a; a=c; c=temp;}
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
