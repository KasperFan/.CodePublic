/*
Name    :   P1478 陶陶摘苹果（升级版）.c
Time    :   2022/11/06 12:15:21
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int force[1010],n,s,a,b,x,y,sum,Li;

int main()
{
    scanf("%d%d",&n,&s);
    scanf("%d%d",&a,&b);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&x,&y);
        if (x<=a+b) force[y]++;
    }
    for (int i = 0; i < 1010; i++)
    {
        if (force[i]==0) continue;
        for (int j = force[i]; j >= 1; j--)
        {
            if (Li+i>s) break;
            Li+=i;sum++;
            force[i]--;
        }
    }
    printf("%d\n",sum);
    return 0;
}
