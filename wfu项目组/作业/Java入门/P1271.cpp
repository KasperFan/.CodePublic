/*
Name    :   P1271.cpp
Time    :   2022/12/6 14:46:41
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int ticket[m];
    for (int i = 0; i < m; i++)
        cin >> ticket[i];
    sort(ticket, ticket + m);
    for (int i = 0; i < m; i++)
        cout << ticket[i] << " ";
    return 0;
}