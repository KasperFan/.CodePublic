#include <stdio.h>

void Move(int n, int start, int goal, int temp)
{
    if (n >= 1)
    {
        Move(n - 1, start, temp, goal);
        printf("Move disk %d from %d to %d.\n", n, start, goal);
        Move(n - 1, temp, goal, start);
    }
    /* else当n == 0时不需要做任何事 */
}

int main()
{
    Move(7, 1, 3, 2);
    return 0;
}

