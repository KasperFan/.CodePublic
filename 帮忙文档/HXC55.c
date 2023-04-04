#include <bits/stdc++.h>
#define N 10
void input(int *p, int n);
void p_sort(int *p, int n);
void output(int *p, int n);
int main()
{
    int a[N];
    input(a, N);
    p_sort(a, N);
    output(a, N);
    return 0;
}

void input(int *p, int n)
{
    int *q;
    for (q = p; q < p + n; q++)
        scanf("%d", q);
}

void p_sort(int *p, int n)
{
    int i, *q, temp;
    for (i = 1; i < n; i++)
        for (q = p; q < p + n - i; q++)
            if (*q > *(q + 1))
            {
                temp = *q;
                *q = *(q + 1);
                *(q + 1) = temp;
            }
}

void output(int *p, int n)
{
    int *q;
    for (q = p; q < p + n; q++)
        printf("%d ", *q);
    printf("\n");
}