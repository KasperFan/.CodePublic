/*
Name    :   P1067.c
Time    :   2022/12/5 11:55:46
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num[n + 1];
    for (int i = n; i >= 0; i--)
        scanf("%d", &num[i]);
    for (int i = n; i >= 0; i--)
    {
        if(n==0){
            printf("%d", num[i]);
        }else if (i == n && i != 0)
        {
            if (abs(num[i]) >= 2)
            {
                if (num[i] > 0)
                    printf("%dx^%d", num[i], i);
                else
                    printf("%dx^%d", num[i], i);
            }
            else if (abs(num[i]) == 1)
            {
                if (num[i] > 0)
                    printf("x^%d", i);
                else
                    printf("-x^%d", i);
            }
        }
        else if (i > 1)
        {
            if (abs(num[i]) >= 2)
            {
                if (num[i] > 0)
                    printf("+%dx^%d", num[i], i);
                else
                    printf("%dx^%d", num[i], i);
            }
            else if (abs(num[i]) == 1)
            {
                if (num[i] > 0)
                    printf("+x^%d", i);
                else
                    printf("-x^%d", i);
            }
        }
        else if (i == 1)
        {
            if (abs(num[i]) >= 2)
            {
                if (num[i] > 0)
                    printf("+%dx", num[i]);
                else
                    printf("%dx", num[i]);
            }
            else if (abs(num[i]) == 1)
            {
                if (num[i] > 0)
                    printf("+x");
                else
                    printf("-x");
            }
        }
        else
        {
            if (abs(num[i]) >= 2)
            {
                if (num[i] > 0)
                    printf("+%d", num[i]);
                else
                    printf("%d", num[i]);
            }
            else if (abs(num[i]) == 1)
            {
                if (num[i] > 0)
                    printf("+1");
                else
                    printf("-1");
            }
        }
    }
    return 0;
}
