/*
Name    :   P4956 [COCI2017-2018#6] Davor.c
Time    :   2022/11/12 09:23:08
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int k = 1; ; k++)
    {
        for (int x = 100; x >= 1; x--)
        {
            if (52*(x*7+21*k)==n) { printf("%d\n%d\n",x,k); return 0;}
        }
    }
    return 0;
}
