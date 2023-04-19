#include <stdio.h>

int jie(int n){
    if (n==1) return 1;
    else return n*jie(n-1);
}

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (!i%2) continue;
        sum+=jie(i);
    }
    printf("%d\n",sum);
    return 0;
}
