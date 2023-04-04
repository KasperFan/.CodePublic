/*
Name    :   try.c
Time    :   2022/10/03 11:24:35
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int input;
    char phoneNumber[16];
    scanf("%d",&input);
    getchar();
    for (int i = 0; i < input; i++)
    {
        fgets(phoneNumber,16,stdin);
        printf("%s\n",phoneNumber);
        for (int a = 0; a < 16; a++)
        {
            if (phoneNumber[a]=='-')
                phoneNumber[a]=1;
            else if (phoneNumber[a]=='A'||phoneNumber[a]=='B'||phoneNumber[a]=='C')
                phoneNumber[a]='2';
            else if (phoneNumber[a]=='D'||phoneNumber[a]=='E'||phoneNumber[a]=='F')
                phoneNumber[a]='3';
            else if (phoneNumber[a]=='G'||phoneNumber[a]=='H'||phoneNumber[a]=='I')
                phoneNumber[a]='4';
            else if (phoneNumber[a]=='J'||phoneNumber[a]=='K'||phoneNumber[a]=='L')
                phoneNumber[a]='5';
            else if (phoneNumber[a]=='M'||phoneNumber[a]=='N'||phoneNumber[a]=='O')
                phoneNumber[a]='6';
            else if (phoneNumber[a]=='P'||phoneNumber[a]=='R'||phoneNumber[a]=='S')
                phoneNumber[a]='7';
            else if (phoneNumber[a]=='T'||phoneNumber[a]=='U'||phoneNumber[a]=='V')
                phoneNumber[a]='8';
            else if (phoneNumber[a]=='W'||phoneNumber[a]=='X'||phoneNumber[a]=='Y')
                phoneNumber[a]='9';
        }
        printf("%s",phoneNumber);
    }
    return 0;
}
