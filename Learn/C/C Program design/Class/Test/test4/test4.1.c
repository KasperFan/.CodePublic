/*
Name    :   test4.1.c
Time    :   2022/10/05 16:14:52
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/


#include<stdio.h>
int main()
{
    int i=1,k=1,n;
    scanf("%d",&n);

    //以下是使用while完成的阶乘计算
    // while (i<=n)
    // {
    //     k*=i;
    //     i++;
    // }

    //以下是用do-while结构完成的阶乘计算
    // do
    // {
    //     k*=i;
    //     i++;
    // } while (i<=n);
    
    //以下将使用for循环完成阶乘计算
    for ( i = 1; i <= n; i++)
    {
        k*=i;
    }
    
    printf("n!=%d\n",k);
    return 0;
}
