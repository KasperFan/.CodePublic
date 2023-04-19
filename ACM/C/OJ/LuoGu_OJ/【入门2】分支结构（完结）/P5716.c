/*
Name    :   P5716.c
Time    :   2022/11/03 16:50:53
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int year,month;
    scanf("%d%d",&year,&month);
    switch (month)
    {
    case 2:
        printf("%d\n",(year%100!=0 && year%4==0) || (year%100==0 && year%400==0)?29:28);
        break;
    case 1:
        printf("31\n");
        break;
    case 3:
        printf("31\n");
        break;
    case 5:
        printf("31\n");
        break;
    case 7:
        printf("31\n");
        break;
    case 8:
        printf("31\n");
        break;
    case 10:
        printf("31\n");
        break;
    case 12:
        printf("31\n");
        break;
    
    case 4:
        printf("30\n");
        break;
    case 6:
        printf("30\n");
        break;
    case 9:
        printf("30\n");
        break;
    case 11:
        printf("30\n");
        break;
    default:
        break;
    }
    return 0;
}
