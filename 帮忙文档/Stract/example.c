/*
Name    :   example.c
Time    :   2022/11/04 16:30:28
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include<stdio.h>
#define SIZE 10
struct funfriend
{
    char name[10];
    char birth[10];
    char num[10];
};
int main()
{
    struct funfriend arr[SIZE];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%s%s",&arr[i].name,&arr[i].birth,&arr[i].num[10]);
    }
    
}