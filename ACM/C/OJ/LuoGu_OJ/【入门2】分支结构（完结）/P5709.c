/*
Name    :   P5709 【深基2.习6】Apples Prologue / 苹果和虫子.c
Time    :   2022/11/02 11:37:39
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int m,t,s;
    scanf("%d%d%d",&m,&t,&s);
    if (t==0) { printf("0\n"); return 0;} 
    printf("%d\n",(s%t==0?m-(s/t):m-(s/t+1))>=0?s%t==0?m-(s/t):m-(s/t+1):0);
    return 0;
}
