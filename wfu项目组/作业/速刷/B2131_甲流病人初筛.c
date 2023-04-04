/*
Name    :   B2131.c
Time    :   2022/10/27 20:45:08
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int num, n;

void sift(char name[],float t,int y)
{
    if (t >= 37.5 && y==1) printf("%s\n",name);
}

int main()
{
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        char name[12];float t;int y;
        scanf("%s%f%d",name,&t,&y);
        sift(name,t,y);
        if (t >= 37.5 && y==1) num++;
    }
    printf("%d\n",num);
    return 0;
}
