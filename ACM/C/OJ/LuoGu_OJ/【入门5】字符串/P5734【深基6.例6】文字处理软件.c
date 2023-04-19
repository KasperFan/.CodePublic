/*
Name    :   P5734【深基6.例6】文字处理软件.c
Time    :   2022/11/06 20:31:09
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <string.h>

char str[1000],str2[1000],str3[1000];
int order,a,b,k;

int main()
{
    int n;
    scanf("%d",&n);
    scanf("%s",str);
    for (int i = 0; i < n; i++)
    {
        scanf("%1d",&order);
        k=strlen(str);
        switch (order)
        {
        case 1:
            scanf("%s",str2);
            strcat(str,str2);
            printf("%s\n",str);
            break;
        
        case 2:
            scanf("%d%d",&a,&b);
            for (int j = 0; j < b; j++) str2[j]=str[a+j];
            strcpy(str,str2);
            printf("%s\n",str);
            break;
        
        case 3:
            scanf("%d",&a);
            scanf("%s",str2);
            for (int j = a; j < k; j++)
            {
                str3[j-a]=str[j];
                str[j]=0;
            }
            strcat(str,str2);
            strcat(str,str3);
            printf("%s\n",str);
            break;
        
        case 4:
            int j;
            scanf("%s",str2);
            for ( j = 0; j < k; j++)
            {
                int l;
                for ( l = 0; l < strlen(str2); l++)
                    if (str2[l]!=str[j+l]) break;
                if (l>=strlen(str2)) {
                    printf("%d\n",i);
                    break;
                }
            }
            if (j>=k) printf("-1\n");
            break;
        }
        for (int j = 0; j < 100; j++) { str2[i]=0; str3[i]=0;}
    }
    
    return 0;
}
