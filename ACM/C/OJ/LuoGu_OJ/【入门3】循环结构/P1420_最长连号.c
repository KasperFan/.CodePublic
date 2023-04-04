/*
Name    :   P1420_最长连号.c
Time    :   2022/11/10 11:18:18
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n,max=1,cont=1;
    scanf("%d",&n);
    long num[n];
    for (int i = 0; i < n; i++) {
        scanf("%ld",&num[i]);
        if (num[i]==num[i-1]+1) {
            cont++;
            max=max<cont?cont:max;
        }
        else cont=1;
    }
    printf("%d\n",max);
    return 0;
}
