/*
Name    :   P1055 [NOIP2008 普及组] ISBN 号码.c
Time    :   2022/11/09 09:12:13
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

char ISBN[14],ch;int sum,cont=1;

int main()
{
    scanf("%s",ISBN);
    for (int i = 0; i < 12; i++)
    {
        if (ISBN[i]>='0' && ISBN[i]<='9') { 
            sum+=(ISBN[i]-'0')*cont;
            cont++;
        }
    }
    sum%=11;
    if (sum==10) ch='X';
    else ch='0'+sum;
    if (ISBN[12]==ch) printf("Right\n");
    else { ISBN[12]=ch; printf("%s\n",ISBN);}
    return 0;
}
