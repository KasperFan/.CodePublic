/*
Name    :   B2128.c
Time    :   2022/10/26 10:50:28
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
// #include <math.h>

// int chuLi(int a)
// {
//     int cnt=0;
//     for (int i = 2; i <= a; i++)
//     {
//         int j;
//         int sk=(int)sqrt(i);
//         for (j = 2; j <= sk; j++) if (i%j==0) break;
//         if (j>sk) {cnt++;}
//     }
//     return cnt;
// }

// int main()
// {
//     int n=10;
//     scanf("%d",&n);
//     printf("%d\n",chuLi(n));
//     return 0;
// }


int main()
{
    int n,flag=0;
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j < i; j++) if (i%j==0) goto loop;
        flag++;
        loop:;
    }
    printf("%d\n",flag);
    return 0;
}
