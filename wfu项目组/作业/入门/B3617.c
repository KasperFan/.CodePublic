/*
Name    :   B3617.c
Time    :   2022/10/20 23:01:12
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void strTran(int lenth,int numStr[],char str2[]);

void twoToSixt(int k,int finNumStr[],char finStr[]);

int main()
{
    char str1[1002];
    int lenth,ctrl;//定义输入长度和控制用变量
    
    fgets(str1,1000,stdin);

    lenth=strlen(str1);ctrl=((strlen(str1)-1)*3);
    // lenth=8;ctrl=21;
    int k=ctrl,numStr[(lenth-1)],finNumStr[k];
    char str2[k+1],finStr1[(k/4)+2];//finStr[(k/4)+2];

    for (int i = 0; i < lenth-1; i++){numStr[i]=0;}//初始化数组
    for (int i = 0; i < (k/4)+1; i++){finStr1[i]=1;}//初始化字符串
    
    for (int i = 0; i < lenth-1; i++){sscanf(&str1[i],"%1d",&numStr[i]);}//数字转移
    strTran(lenth,numStr,str2);
    
    for (int i = 0; i < k+1; i++){sscanf(&str2[i],"%1d",&finNumStr[i]);}//数字转移
    twoToSixt(k,finNumStr,finStr1);
    //for (int i = 0; i < ((k/4)+1); i++){if ((finStr1[i]>='1' && finStr1[i]<='9') || (finStr1[i]>='a' && finStr1[i]<='f')){break;}else finStr1[i]=0;}
    loop:
    if (finStr1[0]=='0') {for (int i = 0; i < (k/4)+1; i++) {finStr1[i]=finStr1[i+1];}}
    
    puts(finStr1);
    
    return 0;
}


void strTran(int lenth,int numStr[],char str2[])
{
    for (int i = lenth-1; i >= 0; i--)
    {
        switch (numStr[i])
        {
        case 0:
            str2[3*(i+1)-3]='0';
            str2[3*(i+1)-2]='0';
            str2[3*(i+1)-1]='0';
            break;
        
        case 1:
            str2[3*(i+1)-3]='0';
            str2[3*(i+1)-2]='0';
            str2[3*(i+1)-1]='1';
            break;
        
        case 2:
            str2[3*(i+1)-3]='0';
            str2[3*(i+1)-2]='1';
            str2[3*(i+1)-1]='0';
            break;
        
        case 3:
            str2[3*(i+1)-3]='0';
            str2[3*(i+1)-2]='1';
            str2[3*(i+1)-1]='1';
            break;
        
        case 4:
            str2[3*(i+1)-3]='1';
            str2[3*(i+1)-2]='0';
            str2[3*(i+1)-1]='0';
            break;
        
        case 5:
            str2[3*(i+1)-3]='1';
            str2[3*(i+1)-2]='0';
            str2[3*(i+1)-1]='1';
            break;
        
        case 6:
            str2[3*(i+1)-3]='1';
            str2[3*(i+1)-2]='1';
            str2[3*(i+1)-1]='0';
            break;
        
        case 7:
            str2[3*(i+1)-3]='1';
            str2[3*(i+1)-2]='1';
            str2[3*(i+1)-1]='1';
            break;
        }
    }
}

void twoToSixt(int k,int finNumStr[],char finStr[])
{
    int a = k-1;
    for (int i = (k/4); i >= 0; i--)
    {
        int n=0,f=0;
        for (; a >= 0; a--)
        {
            n+=finNumStr[a]*pow(2,f);
            f++;
            if (f==4){f=0;a--;break;}
        }
        switch (n)
        {
        case 10:
            finStr[i]='a';
            break;
        
        case 11:
            finStr[i]='b';
            break;
        
        case 12:
            finStr[i]='c';
            break;
        
        case 13:
            finStr[i]='d';
            break;
        
        case 14:
            finStr[i]='e';
            break;
        
        case 15:
            finStr[i]='f';
            break;
        
        default:
            finStr[i]='0'+n;
            break;
        }
    }
}












































































// while ((numStr[i]/2)!=0 || (numStr[i]%2)!=0)
        // {
        //     ctrl--;
        //     int n=numStr[i]%2;
        //     str2[ctrl]='0'+n;
        //     numStr[i]/=2;
        //     // if (numStr[i]/2==0 && numStr[i]%2==1){numStr[ctrl]='1';}
        //     // else if(numStr[i]/2==0 && numStr[i]%2==0){numStr[ctrl]='0';}
        // }
