/*
Name    :   P1047 [NOIP2005 普及组] 校门外的树.c
Time    :   2022/11/10 16:44:29
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

//int tree[10001];

int main()
{
    int l,m,sum=0;
    scanf("%d%d",&l,&m);
    int tree[l+1];
    for (int i = 0; i < l+1; i++) tree[i]=1;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        for (int i = u; i <= v; i++) tree[i]--;
    }
    for (int i = 0; i < l+1; i++) if (tree[i]==1) sum++;
    printf("%d\n",sum);
    return 0;
}
