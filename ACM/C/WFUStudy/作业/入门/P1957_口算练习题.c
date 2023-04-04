/*
Name    :   P1957.c
Time    :   2022/10/18 20:59:24
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,i;
    scanf("%d",&i);
    getchar();
    char ch[i];
    for (int k = 0; k < i; k++)
    {
        char string[10000];
        scanf("%s",string);
        ch[k]=string[0];
        
        switch (ch[k])
        {
        case 'a':
            scanf("%d%d",&a,&b);
            sprintf(string,"%d+%d=%d",a,b,a+b);
            puts(string);
            printf("%lu\n",strlen(string));
            break;
        
        case 'b':
            scanf("%d%d",&a,&b);
            sprintf(string,"%d-%d=%d",a,b,a-b);
            puts(string);
            printf("%lu\n",strlen(string));
            break;
        
        case 'c':
            scanf("%d%d",&a,&b);
            sprintf(string,"%d*%d=%d",a,b,a*b);
            puts(string);
            printf("%lu\n",strlen(string));
            break;
        
        default:
            scanf("%d",&b);
            sscanf(string,"%d",&a);
            ch[k]=ch[k-1];
            switch (ch[k])
            {
            case 'a':
                
                sprintf(string,"%d+%d=%d",a,b,a+b);
                puts(string);
                printf("%lu\n",strlen(string));
                break;
        
            case 'b':
                
                sprintf(string,"%d-%d=%d",a,b,a-b);
                puts(string);
                printf("%lu\n",strlen(string));
                break;
        
            case 'c':
                
                sprintf(string,"%d*%d=%d",a,b,a*b);
                puts(string);
                printf("%lu\n",strlen(string));
                break;
            }
        }
    }
    return 0;
}

