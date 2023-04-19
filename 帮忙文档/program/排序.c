#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
#define bool int
#define true 1
#define false 0
struct student
{
    int num;
    char name[20];
    int age;
    char sex;
    char data[10];
    char address[60];
    int phone;
    char Email[20];
} stu[N];
// 排序学生信息
void Sort(struct student *L)
{
    system("cls");
    int choice = 0;
    printf("按照学号从大到小排序 ---- 1\n");
    printf("按照学号从小到大排序 ---- 2\n");
    printf("按照年龄从大到小排序 ---- 3\n");
    printf("按照年龄从小到大排序 ---- 4\n");
    printf("请选择排序方式：");
    scanf("%d", &choice);

    int flag = 0;
    for (struct student *p = L; p < L + N; p++)
    {
        for (struct student *q = p; q < L - p; q++)
        {
            switch (choice)
            {
            case 1:
                if (!cmp_big_ID(*p, *q))
                {
                    flag = 1;
                }
                break;
            case 2:
                if (!cmp_small_ID(*p, *q))
                {
                    flag = 1;
                }
                break;
            case 3:
                if (!cmp_big_Age(*p, *q))
                {
                    flag = 1;
                }
                break;
            case 4:
                if (!cmp_small_Age(*p, *q))
                {
                    flag = 1;
                }
                break;
            }
            if (flag == 1)
            {
                // 交换数据域
                struct student t = *p;
                *p = *q;
                *q = t;
                flag = 0;
            }
        }
    }
}

// 学号从大到小
bool cmp_big_ID(struct student e1, struct student e2)
{
    return e1.num > e2.num;
}
// 成绩从大到小
bool cmp_big_Age(struct student e1, struct student e2)
{
    return e1.age > e2.age;
}

// 学号从小到大
bool cmp_small_ID(struct student e1, struct student e2)
{
    return e1.num < e2.num;
}
// 成绩从小到大
bool cmp_small_Age(struct student e1, struct student e2)
{
    return e1.age < e2.age;
}