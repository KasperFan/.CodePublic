/*
Name    :   二分模版.cpp
Time    :   2023/01/04 20:52:43
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include <bits/stdc++.h>
using namespace std;

int n, q;

int main()
{
    cin >> n >> q;
    int array[n], head[q], end[q];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    for (int i = 0; i < q; i++)
    {
        head[i] = end[i] = -1;
        int ask;
        cin >> ask;
        for (int j = 0; j < n; j++)
        {
            if (array[0] > ask)
                break;
            if (array[j] == ask)
            {
                if (head[i] == -1)
                    head[i] = j;
                if (array[j + 1] != ask)
                    end[i] = j;
            }
        }
    }
    for (int i = 0; i < q; i++)
        cout << head[i] << " " << end[i] << endl;
    return 0;
}
