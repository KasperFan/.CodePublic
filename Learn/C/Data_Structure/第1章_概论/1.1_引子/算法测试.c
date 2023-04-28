#include <stdio.h>
#include <time.h>
#include <math.h>

clock_t start, stop;
double duration;
#define MAXN 10  /* 多项式最大项数,即多项式阶数+1 */
#define MAXK 1e7 /* 被测函数最大重复调用次数 */

// 代码1.4 计算多项式函数值的直接法
double f1(int n, double a[], double x)
{ /* 计算阶数为n，系数为a[0]...a[n]的多项式在x点的值 */
    double p = a[0];
    for (int i = 1; i <= n; i++)
        p += a[i] * pow(x, i);
    return p;
}

// 代码1.5 计算多项式函数值的秦九韶法
double f2(int n, double a[], double x)
{ /* 计算阶数为n，系数为a[0],...,a[n]的多项式在x点的值 */
    double p = a[n];
    for (int i = n; i > 0; i--)
        p = a[i - 1] + x * p;
    return p;
}

void run(double (*f)(int, double *, double), double a[], int case_n)
{   /* 此函数用于测试被测函数(*f)的运行时间,并且根据case_n输出相应的结果 */
    /* case_n是输出的函数编号:1代表函数f1;2代表函数f2 */
    start = clock();
    for (int i = 0; i < MAXK; i++)
        (*f)(MAXN - 1, a, 1.1);
    stop = clock();

    duration = ((double)(stop - start)) / CLOCKS_PER_SEC / MAXK;
    printf("ticks%d=%lf\n", case_n, (double)(stop - start));
    printf("duration%d=%6.2e\n", case_n, duration);
}

int main()
{
    double a[MAXN];

    /* 为本题的多项式系数赋值,即a[i]=i */
    for (int i = 0; i < MAXN; i++) (double)i;

    run(f1, a, 1);
    run(f2, a, 2);
    return 0;
}



