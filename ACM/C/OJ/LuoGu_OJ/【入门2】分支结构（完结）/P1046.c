/*
Name    :   P1046 [NOIP2005 普及组] 陶陶摘苹果.c
Time    :   2022/11/08 12:05:11
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int height[10],sum,lenth;

int main()
{
    for (int i = 0; i < 10; i++) scanf("%d",&height[i]);
    scanf("%d",&lenth);
    for (int i = 0; i < 10; i++) if (height[i]<=lenth+30) sum++;
    printf("%d\n",sum);
    return 0;
}
