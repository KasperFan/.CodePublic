/*
Name    :   hxc.c
Time    :   2022/12/14 21:29:51
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    int ID;
    char name[20];
    char age[4];
    char num[20];
    char adds[30];
    char email[20];
};

void menu(struct Person *per, char choose);
int Input(struct Person *per, int n);
int Show(struct Person *per, int n);
int Delete(struct Person *per, int n);
int Search(struct Person *per, int n);
int Fix(struct Person *per, int n);
int Save(struct Person *per, int n);

int n = 1;

int main()
{
    char choose = 1;
    struct Person *per = (struct Person *)malloc(n * sizeof(struct Person));
    do
    {
        menu(per, choose);
        printf("\n");
    } while (choose != 'e' && choose != 'E');
    return 0;
}

void menu(struct Person *per, char choose)
{

    printf("         ------------------------------------------\n");
    printf("         |                                        |\n");
    printf("         |         欢迎使用职工信息管理系统       |\n");
    printf("         |                                        |\n");
    printf("         |           1：添加职工信息记录          |\n");
    printf("         |           2：显示职工信息记录          |\n");
    printf("         |           3：删除职工信息记录          |\n");
    printf("         |           4：查询职工信息记录          |\n");
    printf("         |           5：修改职工信息记录          |\n");
    printf("         |           6：将信息保存到文件          |\n");
    printf("         ------------------------------------------\n");
    printf("\n");
    printf("         请按键选择你的操作(E退出系统):");
    scanf("%c", &choose);
    switch (choose)
    {
    case '1':
        n = Input(per, n);
        printf("\n");
        system("clear");
        getchar();
        break;

    case '2':
        Show(per, n);
        printf("\n");
        system("clear");
        getchar();
        break;

    case '3':
        Delete(per, n);
        printf("\n");
        system("clear");
        getchar();
        break;

    case '4':
        Search(per, n);
        printf("\n");
        system("clear");
        getchar();
        break;

    case '5':
        Fix(per, n);
        printf("\n");
        system("clear");
        getchar();
        break;

    case '6':
        Save(per, n);
        printf("\n");
        system("clear");
        getchar();
        break;

    case 'e':
        printf("         您是否要退出系统？（Y/N）:");
        getchar();
        choose = getchar();
        if (choose == 'y' || choose == 'Y')
        {
            free(per);
            per = NULL;
            exit(0);
        }

    case 'E':
        printf("         您是否要退出系统？（Y/N）:");
        getchar();
        choose = getchar();
        if (choose == 'y' || choose == 'Y')
        {
            free(per);
            per = NULL;
            exit(0);
        }
    }
}

int Input(struct Person *per, int n)
{
    system("clear");
    int i = 0;
    char sign, x[10];
    while (sign != 'n' && sign != 'N')
    {
        per = (struct Person *)realloc(per, (n + i) * sizeof(struct Person));
        printf("\t工号:");
        scanf("\t%d", &per[n + i].ID);
        printf("\t姓名:");
        scanf("\t%s", per[n + i].name);
        printf("\t年龄:");
        scanf("\t%s", per[n + i].age);
        printf("\t电话号码:");
        scanf("\t%s", per[n + i].num);
        printf("\t通讯住址:");
        scanf("\t%s", per[n + i].adds);
        printf("\t电子邮箱:");
        scanf("\t%s", per[n + i].email);
        gets(x);
        printf("\n\t是否继续添加?(Y/N)");
        scanf("\t%c", &sign);
        i++;
    }
    return (n + i);
    getchar();
    getchar();
}

int Show(struct Person *per, int n)
{
    for (struct Person *p = per; p < per + n - 1; p++)
        printf("         %d\t%s\t%s\t%s\t%s\t%s\n", p->ID, p->name, p->age, p->num, p->adds, p->email);
    printf("         共有%d个职工信息\n", n - 1);
    getchar();
}
int Delete(struct Person *per, int n)
{
    char name[30];
    printf("         请输入应删除职工的姓名:");
    gets(name);
    for (struct Person *p = per; p < per + n - 1; p++)
    {
        if (!(strcmp(p->name, name)))
        {
            printf("         存在职工信息：%d\t%s\t%s\t%s\t%s\t%s\n", p->ID, p->name, p->age, p->num, p->adds, p->email);
            printf("         是否删除？(Y/N):");
            char accept = getchar();
            if (accept == 'y' || accept == 'Y')
            {
                for (struct Person *q = p; q < per + n - 1; q++)
                {
                    *q = *(q + 1);
                }
                n--;
            }
        }
    }
    getchar();
}
int Search(struct Person *per, int n)
{
    char name[30];
    printf("         请输入待查询职工的姓名:");
    gets(name);
    for (struct Person *p = per; p < per + n - 1; p++)
    {
        if (!(strcmp(p->name, name)))
            printf("         存在职工信息：%d\t%s\t%s\t%s\t%s\t%s\n", p->ID, p->name, p->age, p->num, p->adds, p->email);
    }
    getchar();
}
int Fix(struct Person *per, int n)
{
    char name[30];
    printf("         请输入待修改职工的姓名:");
    gets(name);
    for (struct Person *p = per; p < per + n - 1; p++)
    {
        if (!(strcmp(p->name, name)))
        {
            printf("         存在职工信息：%d\t%s\t%s\t%s\t%s\t%s\n", p->ID, p->name, p->age, p->num, p->adds, p->email);
            printf("         是否修改？(Y/N):");
            char accept = getchar();
            if (accept == 'y' || accept == 'Y')
            {
                printf("         请选择要修改的数据(1:电话号码 2:通讯住址):");
                char point = getchar();
                switch (point)
                {
                case '1':
                    printf("         请输入修改后的电话号码:");
                    scanf("%s", p->num);
                    break;

                case '2':
                    printf("         请输入修改后的通讯住址:");
                    scanf("%s", p->adds);
                    break;

                default:
                    break;
                }
            }
        }
    }
    getchar();
}

int Save(struct Person *per, int n)
{
    FILE *fp = fopen("out.txt", "w+");
    for (struct Person *p = per; p < per + n - 1; p++)
    {
        fprintf(fp, "         %d\t%s\t%s\t%s\t%s\t%s\n", p->ID, p->name, p->age, p->num, p->adds, p->email);
    }
    printf("         信息已保存\n");
    getchar();
}