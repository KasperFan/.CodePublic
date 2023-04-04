/*
Name    :   B2127.c
Time    :   2022/10/26 10:18:23
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>


void panDuan(int k)
{
    int num = 1;
        for (int l = 1; l < sqrt(k); l++)
            if (k%l == 0) if (k/l != k) {num += l; num += k/l;}
        if (num == k) {printf("%d\n",num);}
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 2; i <= n; i++) panDuan(i);
    return 0;
}
