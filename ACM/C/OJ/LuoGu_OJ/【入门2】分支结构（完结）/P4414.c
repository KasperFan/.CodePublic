/*
Name    :   P4414 [COCI2006-2007#2] ABC.c
Time    :   2022/11/09 08:29:38
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

char ch[4];
int num[3],sum,max=0,min=10000;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
        max=max<num[i]?num[i]:max;
        min=min>num[i]?num[i]:min;
    }
    num[0]=min;num[1]=sum-max-min;num[2]=max;
    scanf("%s",ch);
    printf("%d %d %d\n",num[ch[0]-'A'],num[ch[1]-'A'],num[ch[2]-'A']);
    return 0;
}
