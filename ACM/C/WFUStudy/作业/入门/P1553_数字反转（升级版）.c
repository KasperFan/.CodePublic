/*
Name    :   P1553.c
Time    :   2022/10/24 16:28:22
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char 
    inString[23],outString[23];
    
    char str1[23],str2[23];

int main()
{

    int k,lenth,w=0;
    scanf("%s",inString);
    lenth=strlen(inString);
    
    char ch;
    for (int i = 0; i < 20; i++)
    {
        if (inString[i]=='.') {ch='.';k=i;break;}
        else if(inString[i]=='/') {ch='/';k=i;break;}
        else if(inString[i]=='%') {ch='%';k=i;break;}
    }
    switch (ch)
    {
    case '.':
        for (int i = 0; i < k; i++) {str1[k-1-i] = inString[i];}
        for (int i = 0; i < lenth; i++) {if (str1[i]=='0' && str1[i+1]!='\0') {w++;}else break;}
        for (int i = 0; i < w; i++){for (int j = 0; j < lenth; j++) {str1[j]=str1[j+1];}}
        w=0;
        str1[strlen(str1)]='.';
        for (int i = k+1; i < lenth; i++) {str2[lenth-i-1] = inString[i];}
        str2[lenth-k-1]=0;
        for (int i = lenth-k-2; i >=0; i--) {if(str2[i]=='0' && str2[i-1]!='\0') {str2[i]=0;}else break;}
        strcat(str1,str2);
        strcpy(outString,str1);
        break;
    
    case '/':
        for (int i = 0; i < k; i++) {str1[k-1-i] = inString[i];}
        for (int i = 0; i < lenth; i++) {if (str1[i]=='0' && str1[i+1]!='\0') {w++;}else break;}
        for (int i = 0; i < w; i++){for (int j = 0; j < lenth; j++) {str1[j]=str1[j+1];}}
        w=0;
        str1[strlen(str1)]='/';str1[strlen(str1)+1]=0;
        
        for (int i = k+1; i < lenth; i++) {str2[lenth-i-1] = inString[i];}
        str2[lenth-k-1]=0;
        for (int i = 0; i < lenth; i++) {if (str2[i]=='0' && str2[i+1]!='\0') {w++;}else break;}
        for (int i = 0; i < w; i++){for (int j = 0; j < lenth; j++) {str2[j]=str2[j+1];}}
        strcat(str1,str2);
        strcpy(outString,str1);
        break;
    
    case '%':
        for (int i = 0; i < lenth; i++) {outString[i]=inString[lenth-1-i];}
        for (int i = 0; i < lenth; i++) {if ((outString[i]=='0' && outString[i+1]) || outString[i]==37) {w++;}else break;}
        for (int i = 0; i < w; i++){for (int j = 0; j < lenth; j++) {outString[j]=outString[j+1];}}
        outString[strlen(outString)]=37;
        break;
    
    default:
        for (int i = 0; i < lenth; i++) {outString[i]=inString[lenth-1-i];}
        for (int i = 0; i < lenth; i++) {if (outString[i]=='0' && outString[i+1]!='\0') {w++;}else break;}
        for (int i = 0; i < w; i++){for (int j = 0; j < lenth; j++) {outString[j]=outString[j+1];}}
        break;
    }
    puts(outString);
    return 0;
}