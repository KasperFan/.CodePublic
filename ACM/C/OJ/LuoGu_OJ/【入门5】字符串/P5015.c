/*
Name    :   P5015 [NOIP2018 普及组] 标题统计.c
Time    :   2022/11/06 20:07:01
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <string.h>

char words[7];int cout;

int main()
{
    fgets(words,6,stdin);
    for (int i = 0; i < strlen(words); i++)
    {
        if ((words[i]>='A' && words[i]<='Z') || (words[i]>='0' && words[i]<='9') || (words[i]>='a' && words[i]<='z'))
            cout++;
    }
    printf("%d\n",cout);
    return 0;
}
