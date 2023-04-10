#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n;
    // i, j;
    scanf("%d", &m);
    int listm[m];
    for (int i = 0; i < m; i++) scanf("%d", &listm[i]);
    scanf("%d", &n);
    int listn[n];
    for (int i = 0; i < n; i++) scanf("%d", &listn[i]);
    for (int i = 0, j = 0; i < m || j < n; )
    {
        if (i < m && j < n)
        {
            if (listm[i] < listn[j]) printf("%d ", listm[i++]);
            else printf("%d ", listn[j++]);
        }
        else if (i < m) printf("%d ", listm[i++]);
        else printf("%d ", listn[j++]);
    }
    return 0;
}
