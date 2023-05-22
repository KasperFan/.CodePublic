#include <stdio.h>

void PrintN(int N);

int main()
{ /* 读入整数N,并调用PrintN函数 */
    int N;
    scanf("%d", &N);
    PrintN(N);
    return 0;
}

// void PrintN(int N)
// { /* 打印从1到N的全部正整数 */
//     for (int i = 1; i <= N; i++)
//     {
//         printf("%d\n", i);
//     }
//     return;
// }

void PrintN(int N)
{ /* 打印从1到N的全部正整数 */
    if (N > 0)
    {
        PrintN(N - 1);
        printf("%d\n", N);
    }
}