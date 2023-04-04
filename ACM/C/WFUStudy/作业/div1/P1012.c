/*
Name    :   P1012.c
Time    :   2022/11/26 22:27:06
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <math.h>

int getNumberLenth(int k);

int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j + 1 >= n)
                continue;
            if (num[j] * (int)pow(10, getNumberLenth(num[j + 1]) - 1) + num[j + 1] <
                num[j + 1] * (int)pow(10, getNumberLenth(num[j]) - 1) + num[j])
            {
                int temp;
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d", num[i]);
    printf("\n");
    return 0;
}

int getNumberLenth(int k)
{
    if (k >= 100000000)
        return 9;
    else if (k >= 10000000)
        return 8;
    else if (k >= 1000000)
        return 7;
    else if (k >= 100000)
        return 6;
    else if (k >= 10000)
        return 5;
    else if (k >= 1000)
        return 4;
    else if (k >= 100)
        return 3;
    else if (k >= 10)
        return 2;
    else
        return 1;
}
