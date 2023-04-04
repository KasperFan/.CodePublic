#include <stdio.h>

int func(int n);

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d\n", func(n));
    return 0;
}

int func(int n)
{
    if (n > 2)
        return func(n - 1) + func(n - 2);
    else
        return n;
}
