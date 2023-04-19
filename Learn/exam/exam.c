#include <stdio.h>

void sort(int s[], int n);

int main()

{
    int n = 50, s[50];
    printf("请输入学生的专业综合评定成绩:");
    for (int i = 0; i < 50; i++)
        scanf("%d", &s[i]);
    sort(s, n);
    printf("排序完成，结果为:\n");
    for (int i = 0; i < 50; i++)
        printf("%d\n", s[i]);
}

void sort(int s[], int n)
{
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < n - i; j++)
            if (s[j] > s[j + 1])
            {
                int temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
}
