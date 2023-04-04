/*
Name    :   P1271.c
Time    :   2022/12/5 22:55:32
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <algorithm>

int bucket[1000], ticket[2000000];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &ticket[i]);
    }
    
    for (int i = 1; i <= n; i++)
        while (bucket[i]-- > 0) printf("%d ", i);
    return 0;
}
