/*
Name    :   lizhaopeng.c
Time    :   2022/11/04 22:01:23
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

// #include <stdio.h>

// int main()
// {
//     int count=0;
//     for (int i = 1; i < 10; i++)//10
//         for (int j = 1; j < 18; j++)//5
//             for (int k = 1; k < 43; k++)//2
//                 for (int l = 1; l < 85; l++)//1
//                     if (10*i+5*j+2*k+l==100 && i+j+k+l==40) { count++; break;}
//     printf("%d\n",count);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

char str1[1000],str2[1000];

int isDuiCheng (int k,char st1[],char st2[])
{
    sprintf(st1,"%d",k);
    for (int i = 0; i < strlen(st1); i++)
        st2[i]=st1[strlen(st1)-1-i];
    if (strcmp(st1,st2)==0) return 1;
    else return 0;
}

int main(int argc, char const *argv[])
{
    int 
    return 0;
}

