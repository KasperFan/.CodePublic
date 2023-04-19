/*
Name    :   鸡兔同笼.c
Time    :   2022/10/31 16:20:06
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for (int i = 0; i <= b; i++)//暴力枚举兔子的数量
    {
        if (4*i+2*(b-i)==a)
        {
            printf("%d %d\n",b-i,i);
        }
        
    }
    return 0;
}
