#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#define N 1005
int main()
{
    int n,a[N][3],sum[N],pair=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j <= 2; j++)
    scanf("%d", &a[i][j]);
    sum[i] = a[i][0] + a[i][1] + a[i][2];
    }
    for (int k = 0; k < n; k++)
    for (int m = k+1; m < n; m++) 
    if (abs(a[k][0] - a[m][0]) <= 5 &&
        abs(a[k][1] - a[m][1]) <= 5 &&
        abs(a[k][2] - a[m][2]) <= 5 &&
        abs(sum[k] - sum[m] <= 10))
        pair++;
    printf("%d",pair);
    return 0;
    }