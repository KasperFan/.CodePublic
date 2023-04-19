/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-07 11:40:18
 * @LastEditTime: 2023-03-07 11:46:20
 * @FilePath: /.code/C/Data_Structure/1.2.c
 * @Description: This file is created for learning Code.
 *
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved.
 */

#include <stdio.h>

void PrintN1(int N)
{
    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", i);
    }
    return;
}

void PrintN2(int N)
{
    if (N > 0)
    {
        PrintN2(N - 1);
        printf("%d\n", N);
    }
}

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    // PrintN1(N);
    PrintN2(N);
    return 0;
}
