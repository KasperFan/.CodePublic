#include<stdio.h>
void p_sort(int *p, int n);
int main()
{
    int a[10];
    p_sort(a, 10);
    return 0;
}
void p_sort(int *p, int n)
{
    int i, j, t;
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    for (i = 0; i < n; i++)
        for (j = 1; j <= 9 - i; j++)
            if (*(p+j-1) > *(p + j))
            {
                t = *(p + j - 1);
                *(p + j - 1) = *(p + j);
                *(p + j) = t;
            }
    for (i = 0; i < n; i++)
        printf("%d\n", *(p + i));
}


#include <stdio.h>
void p_sort(int *p, int n);
int main()
{
    int a[10];
    p_sort(a, 10);
    return 0;
}
void p_sort(int *p, int n)
{
    int i, j, t;
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    for (i = 1; i < n; i++)
        for (j = 0; j <= 10 - i; j++)
            if (*p > *(p + j))
            {
                t = *p;
                *p = *(p + j);
                *(p + j) = t;
            }
    for (i = 0; i < n; i++)
        printf("%d\n", *(p + i));
}
