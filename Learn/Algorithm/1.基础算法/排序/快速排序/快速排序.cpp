#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];

void quick_sort(int q[], int l, int r)
{
    if (l >= r)
        return; // 判断边界:如果区间里只有一个数或没有数的话，直接return

    int i = l - 1, j = r + 1, x = q[l + r >> 1]; // 确定分界点数x，i和j两个指针
    while (i < j)
    {
        do i++; while (q[i] < x); // 只要左指针指向的数小于x，则左指针向右平移
        do j--; while (q[j] > x); // 只要右指针指向的数大于x，则右指针向左平移
        if (i < j) swap(q[i], q[j]);
    }

    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}

int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &q[i]);

    quick_sort(q, 0, n - 1);

    for (int i = 0; i < n; i++) printf("%d ", q[i]);

    return 0;
}