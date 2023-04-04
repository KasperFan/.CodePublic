#include <stdio.h>
int main(int argc, char *argv[])
{
    for (double y = 1.5; y > -1.5; y -= 0.1)
    {
        for (double x = -1.5; x < 1.5; x += 0.05)
        {
            double a = x * x + y * y - 1;
            double s = a * a * a - x * x * y * y * y;
            putchar(a * a * a - x * x * y * y * y <= 0.0 ? '@' : ' ');
        }
        putchar('\n');
    }
    printf("祝雯静永远快乐! 不只是圣诞节, 天天都快乐");
    printf("\n");
    return 0;
}