/*
Name    :   11.2.c
Time    :   2022/11/02 10:29:11
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#define M 10

int main()
{
    int a[M]={0,6,4,2,8,1,9,45,10,33};
    int minpos=0;
    for (int i = 1; i < M; i++)
        if (a[i]<a[minpos]) minpos=i;
    printf("minvalue=a[%d]=%d",minpos,a[minpos]);
    return 0;
}
