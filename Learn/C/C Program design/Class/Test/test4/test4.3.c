/*
Name    :   test4.3.c
Time    :   2022/10/05 16:53:55
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
int main()
{
    int a,b,c,n,count=0;
    printf("请输入任意取出的球的个数：");
    scanf("%d",&n);
    for (a; a <= 3; a++)
    {
        for (b; b <= 3; b--)
        {
            for (c = n;c <= 6; c--)
            {
                printf("取出%d个白球，%d个红球，%d个黄球\n");
                b+=1;
                count++;
            }
            
        }
    }
    
    return 0;
}

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n,white,red,yellow
//     return 0;
// }
