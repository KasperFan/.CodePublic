/*
Name    :   P1923.cpp
Time    :   2022/12/14 20:33:34
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array + n);
    while (array[k] == array[k + 1])
        k++;
    cout << array[k] << endl;
    return 0;
}
