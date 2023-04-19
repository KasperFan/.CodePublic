/*
Name    :   P1307 [NOIP2011 普及组] 数字反转.c
Time    :   2022/11/10 10:21:35
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <string.h>

char in[11],out[11];

int main()
{
    scanf("%s",in);
    if (in[0]=='-') {
        out[0]=in[0];
        for (int i = 1; i < strlen(in); i++) out[i]=in[strlen(in)-i];
    }
    else for (int i = 0; i < strlen(in); i++) out[i]=in[strlen(in)-1-i];
    int k=strlen(out);
    for (int i = 0; i < k; i++)
    {
        if (out[i]>='1' && out[i]<='9') break;
        if (out[i]=='0' && out[i+1]!='\0') 
        {
            i--;
            for (int j = i+1; j <= k; j++) out[j]=out[j+1];
        }
    }
    printf("%s\n",out);
    return 0;
}
