/*
Name    :   hello.c
Time    :   2022/12/20 17:52:26
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include<stdio.h>

int max(int a,int b){
    return a > b ? a : b;
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", max(a, b));
    return 0;
}

// void xxx(){

// }