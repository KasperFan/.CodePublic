/*
Name    :   P5711.c
Time    :   2022/11/03 15:06:30
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    printf("%d\n",(year%100!=0 && year%4==0) || (year%100==0 && year%400==0)?1:0);
    return 0;
}
