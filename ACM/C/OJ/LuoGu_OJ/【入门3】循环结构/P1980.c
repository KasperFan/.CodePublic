/*
Name    :   P1980 [NOIP2013 普及组] 计数问题.c
Time    :   2022/11/09 11:23:01
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <string.h>

char str[10],ch;
int n,x,cont;

int main()
{
    scanf("%d%d",&n,&x);
    ch='0'+x;
    for (int i = 1; i <= n; i++)
    {
        sprintf(str,"%d",i);
        for (int j = 0; j < strlen(str); j++)
            if (str[j]==ch) cont++;
    }
    printf("%d\n",cont);
    return 0;
}
