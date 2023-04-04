#include <stdio.h>
#define N 10

int Score_1_ave, Score_2_ave;
struct Student
{
    char Name[20];
    int Score_1;
    int Score_2;
};

int main()
{
    struct Student info[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%s %d %d", info[i].Name, &info[i].Score_1, &info[i].Score_2);
        Score_1_ave += info[i].Score_1;
        Score_2_ave += info[i].Score_2;
    }
    Score_1_ave /= N;
    Score_2_ave /= N;
    printf("%-20s %-10s %-10s\n", "Name", "Score-1", "Score-2");
    for (int i = 0; i < N; i++)
        printf("%-20s %-10d %-10d\n", info[i].Name, info[i].Score_1, info[i].Score_2);
    printf("%-20s %-10d %-10d\n", "Average", Score_1_ave, Score_2_ave);
    return 0;
}
