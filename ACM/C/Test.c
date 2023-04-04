// #include <stdio.h>
// #include <stdlib.h>
// void p_sort(int *p, int n);
// int main()
// {
//     int n;
//     //printf("{Hello World!}\n");
//     FILE *fp1, *fp2;
//     fp1 = fopen("test.in", "r");
//     fp2 = fopen("Test.out", "a+");
//     fscanf(fp1, "%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         fscanf(fp1, "%d", &arr[i]);
//     p_sort(arr, n);
//     for (int i = 0; i < n; i++)
//         if (i != n - 1)
//             fprintf(fp2, "%d ", arr[i]);
//         else
//             fprintf(fp2, "%d\n", arr[i]);
//     return 0;
// }

// void p_sort(int *p, int n)
// {
//     for (int i = 0; i < n; i++)
//         for (int *q = p; q < p + n - i - 1; q++)
//         {
//             if (*q > *(q + 1))
//             {
//                 int temp = *q;
//                 *q = *(q + 1);
//                 *(q + 1) = temp;
//             }
//         }
// }

#include <stdio.h>
#include <string.h>

#define N 4
struct stu
{
    int num;
    char name[16];
    char sex;
    int score;
};
void search(struct stu s[], char name[16]);
void input(struct stu s[]);
void output(struct stu s[]);
int max(struct stu s[]);
void bubble(struct stu s[]);
void select(struct stu s[]);
int main(void)
{
    struct stu s[N];
    char name[16];
    input(s);
    output(s);
    printf("input a name to find:");
    scanf("%s", name);
    search(s, name);
    return 0;
}
void input(struct stu s[])

{
    struct stu *p;
    for (int i=0; p+i < s+N; i++)
    {
        printf("input stu[%d]", i);
        scanf("%d %s %c %d", &(p + i)->num, (p + i)->name, &(p + i)->sex, &(p + i)->score);
    }
}

void output(struct stu *q)
{
    struct stu *p;
    for (p = q; p < q+N; p++)
        printf("%d %s %c %d\n", p->num, p->name, p->sex, p->score);
}
int max(struct stu s[])
{
    int i, maxp;
    maxp = 0;
    for (i = 1; i < N; i++)
        if (s[i].score > s[maxp].score)
            maxp = i;
    return maxp;
}

void bubble(struct stu s[])
{
    struct stu t;
    int i, j;
    for (i = 1; i < N; i++)
        for (j = 0; j < N - i; j++)
            if (s[j].score < s[j + 1].score)
                t = s[j], s[j] = s[j + 1], s[j + 1] = t;
}

void select(struct stu s[])
{
    struct stu t;
    int i, j, maxp;
    for (i = 0; i < N - 1; i++)
    {
        maxp = i;
        for (j = i + 1; j < N; j++)
            if (s[j].score > s[maxp].score)
                maxp = j;
        if (maxp != i)
            t = s[i], s[i] = s[maxp];
        s[maxp] = t;
    }
}
void search(struct stu *p, char name[16])
{
    struct stu *q;
    for (q = p; q < p + N; q++)
    {
        if (strcmp(q->name, name) == 0)
            break;
    }
    if (q < p + N)
        printf("found student:%d %s %c %d\n", q->num, q->name, q->sex, q->score);
    else
        printf("not found\n");
}