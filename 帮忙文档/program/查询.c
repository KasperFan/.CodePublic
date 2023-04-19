#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
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
// 查询学生信息
void Search_Printf(struct student *stu)
{
    system("cls");
    int choice = 0;
    printf("按照学号查询 ---- 1\n");
    printf("按照姓名查询 ---- 2\n");
    printf("请输入查询方式：");
    scanf("%d", &choice);

    int id;
    char name[50];
    struct student *st;
    if (choice == 1)
    {
        printf("请输入要查询的学号：");
        scanf("%d", &id);
        st = Search(id, stu);

        if (st == NULL)
        {
            printf("查无此人！\n");
        }
        else
        {
            printf("________________________________________________________________\n");
            printf("|学号\t|姓名\t|年龄\t|性别\t|出生年月\t\t|地址\t\t|电话\t|E-mail\t|\n");
            printf("________________________________________________________________\n");
            printf("%d|%s\t|%d\t|%c\t|%s\t|%s\t|%d\t|%s\t|\n", st->num, st->name, st->age, st->sex, st->data, st->address, st->phone, st->Email);
            printf("________________________________________________________________\n");
        }
    }
    else if (choice == 2)
    {
        printf("请输入要查询的姓名：");
        scanf("%s", name);
        st = Search(name, stu);

        if (st == NULL)
        {
            printf("查无此人！\n");
        }
        else
        {
            printf("________________________________________________________________\n");
            printf("|学号\t|姓名\t|年龄\t|性别\t|出生年月\t\t|地址\t\t|电话\t|E-mail\t|\n");
            printf("________________________________________________________________\n");
            printf("%d|%s\t|%d\t|%c\t|%s\t|%s\t|%d\t|%s\t|\n", st->num, st->name, st->age, st->sex, st->data, st->address, st->phone, st->Email);
            printf("________________________________________________________________\n");
        }
    }
}
// 按学号进行查找
struct student *Search_id(int id, struct student *stu)
{
    struct student *p = stu;

    while (p++ <= stu + N)
    {
        if (p->num == id)
        {
            return p;
        }
    }
    return NULL;
}
// 按姓名进行查找
struct student *Search_name(char name[], struct student *stu)
{
    struct student *p = stu;

    while (p++ <= stu + N)
    {
        if (strcmp(name, p->name))
        {
            return p;
        }
    }
    return NULL;
}