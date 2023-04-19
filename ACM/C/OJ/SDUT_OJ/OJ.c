/*
Name    :   OJ.c
Time    :   2022/09/28 22:05:42
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/
// #include <stdio.h> 
// int main()
// { 
//     int a,b;
//     while(scanf("%d %d",&a, &b) != EOF)   
//             printf("%d\n",a+b);
//     return 0; 
// }  

#include<stdio.h>
int main()
{
    int C=2;
    scanf("%d",&C);
    int arr[C][7];
    for (int i = 0; i < C; i++)
    {
        scanf("%d",&arr[C][i]);
        if (arr[C][i])
        {
            /* code */
        }
        
    }
    for (int i = 0; i <= C; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
