/*
Name    :   class.c
Time    :   2022/10/05 11:53:36
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/
#include<stdio.h>

// int main()
// {
//     // for(int n=100;n<=200;n++)
//     // {
//     //     if(n%3==0)
//     //         continue;
//     //     printf("%5d",n);
//     // }
//     for(int n=100;(n%3)||n<=200;n++)
//     {
//         printf("%5d",n);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int jie=1,n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//         jie*=i;
//     printf("%d",jie);
//     return 0;
// }


// #include <stdio.h>
// #define M 10
// int main()
// {
//     char name[M]="merryhhhh";
//     fgets(name,9,stdin);
//     for (int i = 0; i < M; i++) putchar(name[i]);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",num[i]);
    }
    
    return 0;
}
