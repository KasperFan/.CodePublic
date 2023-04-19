/*
Name    :   1007.c
Time    :   2022/10/03 10:44:15
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/
#include<stdio.h>
int main()
{
    float month[12], all;
    for (int i = 0; i < 12; i++)
    {
        scanf("%f",&month[i]);
        all = all + month[i];
        if (i==11)
        {
            printf("$%.2f\n",(float)all/12);
        }
    }
    return 0;
}
