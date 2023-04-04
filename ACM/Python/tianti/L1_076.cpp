/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-07 20:41:08
 * @LastEditTime: 2023-03-07 20:47:48
 * @FilePath: /.code/tianti_1/L1_076.cpp
 * @Description: This file is created for learning Code.
 *
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    double P[N];
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (P[i] < M)
        {
            // cout << "On Sale! " + P[i] << endl;
            printf("On Sale! %.1lf\n", P[i]);
        }
    }
    return 0;
}