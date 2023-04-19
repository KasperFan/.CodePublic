/*
Name    :   check.c
Time    :   2022/12/20 11:09:54
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include<string.h>

int main()
{
    char input[100], check[100];
    scanf("%s", input);
    scanf("%s", check);
    printf("%d", strcmp(input, check));
    return 0;
}
