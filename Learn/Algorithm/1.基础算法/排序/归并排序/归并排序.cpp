#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int n;
int a[N], tmp[N];// 原数组和辅助数组

void merge_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int mid = l + r >> 1;// 确定中间位置

    merge_sort(q, l, mid), merge_sort(q, mid + 1, r);// 先“分”
    // 归并过程
    int k = 0, i = l, j = mid + 1;// k表示合并时合并了多少个数，i、j分别是左右指针，指向左半边和右半边起点
    while (i <= mid && j <= r)
        if (q[i] <= q[j]) tmp[k ++ ] = q[i ++ ];
        else tmp[k ++ ] = q[j ++ ];
    while (i <= mid) tmp[k ++ ] = q[i ++ ];// 只要左半边剩下的没有循环完，就把左半边剩下的全部接到后面
    while (j <= r) tmp[k ++ ] = q[j ++ ];

    for (i = l, j = 0; i <= r; i ++, j ++ ) q[i] = tmp[j];
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i ++ ) scanf("%d", &a[i]);

    merge_sort(a, 0, n - 1);

    for (int i = 0; i < n; i ++ ) printf("%d ", a[i]);

    return 0;
}