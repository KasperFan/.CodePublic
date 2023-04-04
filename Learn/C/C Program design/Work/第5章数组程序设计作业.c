/*
Name    :   第5章数组程序设计作业.c
Time    :   2022/11/02 16:48:56
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for C homework.
*/

#include <stdio.h>

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++) 
    {
        //printf("请输入第%d次的超值记录:",i+1);
        scanf("%1d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i]==1)
            printf("第%d次，超值\n",i+1);
        else printf("第%d次，一般\n",i+1);
    }
    return 0;
}
