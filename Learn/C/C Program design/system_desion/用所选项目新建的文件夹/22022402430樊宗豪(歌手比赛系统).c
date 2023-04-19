/*
Name    :   歌手比赛系统.c
Time    :   2022/12/14 11:05:33
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for the Lession Program Desion
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <unistd.h>
// #include <signal.h>
#define N 10
struct singer // 结构体声明
{
    int Number;      // 选手编号
    char Name[20];   // 选手姓名
    int score[N];    // 十个评委成绩
    int scoreSum;    // 总成绩
    int scoreMax;    // 最高分
    int scoreMin;    // 最低分
    double scoreAve; // 平均分
};

// 两个全局变量，一会会用到
int n,flag;
char choise;

// 主菜单
void menu(struct singer *people);
// 输入选手数据
void creatList(struct singer *people);
// 评委打分
void inputScore(struct singer *people);
// 成绩排序（按平均分）
void scoreSort(struct singer *people);
// 数据查询
void search(struct singer *people);
// 追加学生数据
void attend(struct singer *people);
// 写入数据文件
void writeFile(struct singer *people);

int main(int argc, char const *argv[])
{
    printf("         请输入选手人数:");
    scanf("%d", &n);
    struct singer *people = (struct singer *)malloc(n * sizeof(struct singer));
    do
    {
        system("clear");
        menu(people);
        printf("\n");
    } while (choise != '7');
    return 0;
}

void menu(struct singer *people) // 接入节点参数
{
    printf("         ******************************************\n");
    printf("         *                                        *\n");
    printf("         *         欢迎使用歌手比赛系统           *\n");
    printf("         *                                        *\n");
    printf("         *           1：输入选手数据              *\n");
    printf("         *           2：评委打分                  *\n");
    printf("         *           3：选手成绩排序              *\n");
    printf("         *           4：选手数据查询              *\n");
    printf("         *           5：追加选手数据              *\n");
    printf("         *           6：写入数据文件              *\n");
    printf("         *           7：退出系统                  *\n");
    printf("         *                                        *\n");
    printf("         ******************************************\n");
    printf("\n");
    printf("---------------------------------------------------------------------\n");
    printf("         请按键选择你的操作:");
    choise = getchar();
    switch (choise)
    {
    case '1':
        system("clear");
        if (flag != 0)
        {
            printf("选手数据已创建，请使用追加选手数据功能以添加选手数据\n");
            printf("按回车键返回主菜单\n");
            getchar();
        }
        else
        {
            creatList(people);
            printf("\n");
        }
        getchar();
        system("clear");
        break;

    case '2':
        inputScore(people);
        printf("\n");
        system("clear");
        break;

    case '3':
        scoreSort(people);
        getchar();
        printf("\n");
        system("clear");
        break;

    case '4':
        search(people);
        getchar();
        printf("\n");
        system("clear");
        break;

    case '5':
        attend(people);
        getchar();
        printf("\n");
        system("clear");
        break;

    case '6':
        writeFile(people);
        getchar();
        printf("\n");
        system("clear");
        break;

    case '7':
        printf("         您是否要退出系统?(Y/N):");
        getchar();
        choise = getchar();
        if (choise == 'y' || choise == 'Y')
        {
            free(people);      // 释放malloc取来的内存
            people = NULL;     // 制造出了一个没有对象的野指针，2333333
            exit(0);
        }
    }
}

// 输入函数
void creatList(struct singer *people)
{
    char x[2];
    system("clear");
    for (int i = 0; i < n; i++)
    {
        printf("         请输入选手%d的编号:", i + 1);
        scanf("%d", &people[i].Number);
        printf("         请输入选手%d的姓名:", i + 1);
        scanf("%s", people[i].Name);
    }
    flag = 1;
    fgets(x, 2, stdin);
    printf("\n         选手信息已输入完成,按回车键确认并返回主菜单");
}

void inputScore(struct singer *people)
{
    for (int i = 0; i < n; i++)
    {
        system("clear");
        people[i].scoreSum = people[i].scoreMax = people[i].scoreAve = 0;
        printf("\n         现在输入第%d位选手的打分\n\n", i + 1);
        for (int j = 0; j < N; j++)
        {
            printf("         请输入第%d位评委打分：", j + 1);
            scanf("%d", &people[i].score[j]);
            people[i].scoreSum += people[i].score[j];
            people[i].scoreMax = people[i].scoreMax < people[i].score[j] ? people[i].score[j] : people[i].scoreMax;
            people[i].scoreMin = people[i].scoreMin > people[i].score[j] ? people[i].score[j] : people[i].scoreMin;
        }
        people[i].scoreAve = (people[i].scoreSum - people[i].scoreMax - people[i].scoreMin) / 8.0;
    }
    printf("\n         选手成绩已输入完成，请按回车键确认并返回主菜单");
    getchar();
}

void scoreSort(struct singer *people)
{
    for (int i = 1; i < n; i++)
        for (int j = 0; j < n - i; j++)
            if (people[j].scoreAve < people[j + 1].scoreAve)
            {
                struct singer temp = people[j + 1];
                people[j + 1] = people[j];
                people[j] = temp;
            }
    printf("         %-10s %-20s %-10s %-10s\n", "编号", "姓名", "总成绩", "平均成绩");
    for(int i=0;i<n;i++)
    {
        printf("         %-8d %-18s %-7d %-8.2lf\n", people[i].Number, people[i].Name, people[i].scoreSum, people[i].scoreAve);
    }
    printf("\n         选手平均成绩已排序完成，请按回车键确认并返回主菜单");
    getchar();
}

void search(struct singer *people)
{
    system("clear");
    int count = 0;
    printf("         1:选手编号\n");
    printf("         2:选手姓名\n");
    printf("         3:选手总成绩\n");
    printf("         4:选手平均成绩\n");
    printf("\n         请按键回车选择查询方式：");
    getchar();
    char point = getchar();
    switch (point)
    {
    case '1':
        int num1;
        printf("         请输入查询的选手编号：");
        scanf("%d", &num1);
        printf("         %-10s %-20s %-10s %-10s\n", "编号", "姓名", "总成绩", "平均成绩");
        for (int i = 0; i < n; i++)
            if (people[i].Number == num1)
            {
                printf("         %-8d %-18s %-7d %-8.2lf\n", people[i].Number, people[i].Name, people[i].scoreSum, people[i].scoreAve);
                count++;
            }
            else if (i == n - 1 && !count)
                printf("         不存在对应选手！\n");
        if (count)
            printf("         查询完毕，共有%d名符合条件的选手,请按回车键确认并返回主菜单", count);
        break;

    case '2':
        char name[20];
        printf("         请输入查询的选手姓名：");
        scanf("%s", name);
        printf("         %-10s %-20s %-10s %-10s\n", "编号", "姓名", "总成绩", "平均成绩");
        for (int i = 0; i < n; i++)
            if (!strcmp(people[i].Name, name))
            {
                printf("         %-8d %-18s %-7d %-8.2lf\n", people[i].Number, people[i].Name, people[i].scoreSum, people[i].scoreAve);
                count++;
            }
            else if (i == n - 1 && !count)
                printf("         不存在对应选手！\n");
        if (count)
            printf("         查询完毕，共有%d名符合条件的选手,请按回车键确认并返回主菜单", count);
        break;

    case '3':
        int score;
        printf("         请输入查询的选手总成绩：");
        scanf("%d", &score);
        printf("         %-10s %-20s %-10s %-10s\n", "编号", "姓名", "总成绩", "平均成绩");
        for (int i = 0; i < n; i++)
            if (people[i].scoreSum == score)
            {
                printf("         %-8d %-18s %-7d %-8.2lf\n", people[i].Number, people[i].Name, people[i].scoreSum, people[i].scoreAve);
                count++;
            }
            else if (i == n - 1 && !count)
                printf("         不存在对应选手！\n");
        if (count)
            printf("         查询完毕，共有%d名符合条件的选手,请按回车键确认并返回主菜单", count);
        break;

    case '4':
        double ave;
        printf("         请输入查询的选手平均成绩：");
        scanf("%lf", &ave);
        printf("         %-10s %-20s %-10s %-10s\n", "编号", "姓名", "总成绩", "平均成绩");
        for (int i = 0; i < n; i++)
            if ((int)people[i].scoreAve == (int)ave)
            {
                printf("         %-8d %-18s %-7d %-8.2lf\n", people[i].Number, people[i].Name, people[i].scoreSum, people[i].scoreAve);
                count++;
            }
            else if (i == n - 1 && !count)
                printf("         不存在对应选手！\n");
        if (count)
            printf("         查询完毕，共有%d名符合条件的选手,请按回车键确认并返回主菜单", count);
        break;

    default:
        break;
    }
    getchar();
}

void attend(struct singer *people)
{
    int cnt;
    system("clear");
    printf("         请输入追加的选手数量:");
    scanf("%d", &cnt);
    n += cnt;
    people = (struct singer *)realloc(people, n * sizeof(struct singer));
    for (int i = n-cnt; i < n; i++)
    {
        printf("         请输入选手%d的编号和姓名，用空格隔开：", i + 1);
        scanf("%d %s", &people[i].Number, people[i].Name);
        printf("         现在输入第%d位选手的打分\n", i + 1);
        for (int j = 0; j < N; j++)
        {
            printf("         请输入第%d位评委打分：", j + 1);
            scanf("%d", &people[i].score[j]);
            people[i].scoreSum += people[i].score[j];
            people[i].scoreMax = people[i].scoreMax < people[i].score[j] ? people[i].score[j] : people[i].scoreMax;
            people[i].scoreMin = people[i].scoreMin > people[i].score[j] ? people[i].score[j] : people[i].scoreMin;
        }
        people[i].scoreAve = (people[i].scoreSum - people[i].scoreMax - people[i].scoreMin) / 8.0;
    }
    printf("\n         选手数据已追加完毕，请按回车键确认并返回主菜单");
    getchar();
}

void writeFile(struct singer *people)
{
    FILE *fp;
    char fileName[40];
    system("clear");
    printf("         请输入欲保存的文件名：");
    scanf("%s", fileName);
    fp = fopen(fileName, "w+");
    fprintf(fp, "         %-10s %-20s %-10s %-10s\n", "编号", "姓名", "总成绩", "平均成绩");
    fprintf(fp, "         ---------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        fprintf(fp,"         %-8d %-18s %-7d %-8.2lf\n", people[i].Number, people[i].Name, people[i].scoreSum, people[i].scoreAve);
    }
    fclose(fp);
    fp = NULL;
    printf("\n         选手数据文件已写入完毕，请按回车键确认并返回主菜单");
    getchar();
}
