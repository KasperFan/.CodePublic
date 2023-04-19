/*
Name    :   P5710 【深基3.例2】数的性质.c
Time    :   2022/11/02 11:37:39
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int xingZhi(int num){
    if (num%2==0 && (num>4 && num<=12)) return 2;
    else if (num%2==0 || (num>4 && num<=12)) return 1;
    else return 0;
}

int xiaoA(int k){
    if (k==2) return 1;
    else return 0;
}
int Uim(int k){
    if (k>=1) return 1;
    else return 0;
}
int baWeiYong(int k){
    if (k==1) return 1;
    else return 0;
}
int zhengMei(int k){
    if (k==0) return 1;
    else return 0;
}

int main()
{
    int num;
    scanf("%d",&num);
    int zhi=xingZhi(num);
    printf("%d %d %d %d\n",xiaoA(zhi),Uim(zhi),baWeiYong(zhi),zhengMei(zhi));
    return 0;
}

CSARIE