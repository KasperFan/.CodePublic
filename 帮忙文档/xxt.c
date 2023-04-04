/*
Name    :   xxt.c
Time    :   2022/12/20 21:45:51
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books
{
    char name[20];
    char Authorname[20];
    int ID;
    char publishingHouse[10];
    char publishDate[20];
    int cost;
};

void menu(struct Books *per, char choose);
int Input(struct Books *per, int n);
void Fix(struct Books *per, int n);
void Delete(struct Books *per, int n);
void Show(struct Books *per, int n);
void Search(struct Books *per, int n);

int n = 1;

int main()
{
    char choose = 1;
    struct Books *per = (struct Books *)malloc(n * sizeof(struct Books));
    do
    {
        menu(per, choose);
        printf("\n");
    } while (choose != 'e' && choose != 'E');
    return 0;
}
// 菜单
void menu(struct Books *per, char choose)
{

    printf("         ------------------------------------------\n");
    printf("         |                                        |\n");
    printf("         |         欢迎使用图书管理系统           |\n");
    printf("         |                                        |\n");
    printf("         |           1：插入书籍信息              |\n");
    printf("         |           2：修改书籍信息              |\n");
    printf("         |           3：删除书籍信息              |\n");
    printf("         |           4：显示书籍信息              |\n");
    printf("         |           5：查询书籍信息              |\n");
    printf("         |                                        |\n");
    printf("         ------------------------------------------\n");
    printf("\n");
    printf("         请按键选择你的操作(E退出系统):");
    scanf("%c", &choose);
    switch (choose)
    {
    case '1':
        n = Input(per, n);
        printf("\n");
        // system("clear");
        getchar();
        break;

    case '2':
        Fix(per, n);
        printf("\n");
        // system("clear");
        getchar();
        break;

    case '3':
        Delete(per, n);
        printf("\n");
        // system("clear");
        getchar();
        break;

    case '4':
        Show(per, n);
        printf("\n");
        // system("clear");
        getchar();
        break;

    case '5':
        Search(per, n);
        printf("\n");
        // system("clear");
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

// 插入
int Input(struct Books *per, int n)
{
    // system("clear");
    int i = 0;
    char sign, x[2];
    while (sign != 'n' && sign != 'N')
    {
        per = (struct Books *)realloc(per, (n + i) * sizeof(struct Books));
        printf("\t书名:");
        scanf("%s", per[i].name);
        printf("\t作者:");
        scanf("%s", per[i].Authorname);
        printf("\t书号:");
        scanf("%d", &per[i].ID);
        printf("\t出版社:");
        scanf("%s", per[i].publishingHouse);
        printf("\t出版日期:");
        scanf("%s", per[i].publishDate);
        printf("\t单价:");
        scanf("%d", &per[i].cost);
        fgets(x, 2, stdin);
        printf("\n\t是否继续添加?(Y/N)");
        scanf("%c", &sign);
        i++;
    }
    return (n + i);
    getchar();
    getchar();
}

// 修改
void Fix(struct Books *per, int n)
{
    char name[30];
    printf("         请输入待修改书籍的书名:");
    scanf("%s", name);
    for (struct Books *p = per; p < per + n - 1; p++)
    {
        if (!(strcmp(p->name, name)))
        {
            printf("         存在书籍信息：%s\t%s\t%d\t%s\t%s\t%d\n", p->name, p->Authorname, p->ID, p->publishingHouse, p->publishDate, p->cost);
            printf("         是否修改？(Y/N):");
            char accept = getchar();
            if (accept == 'y' || accept == 'Y')
            {
                printf("         请选择要修改的数据(1:书号 2:单价):");
                char point = getchar();
                switch (point)
                {
                case '1':
                    printf("         请输入修改后的书号:");
                    scanf("%d", p->ID);
                    break;

                case '2':
                    printf("         请输入修改后的单价:");
                    scanf("%s", p->cost);
                    break;

                default:
                    break;
                }
            }
        }
    }
    getchar();
}
// 删除
void Delete(struct Books *per, int n)
{
    char name[30];
    printf("         请输入应删除书籍的书名:");
    gets(name);
    for (struct Books *p = per; p < per + n - 1; p++)
    {
        if (!(strcmp(p->name, name)))
        {
            printf("         存在书籍信息：%s\t%s\t%d\t%s\t%s\t%d\n", p->name, p->Authorname, p->ID, p->publishingHouse, p->publishDate, p->cost);
            printf("         是否删除？(Y/N):");
            char accept = getchar();
            if (accept == 'y' || accept == 'Y')
            {
                struct Books *q;
                for (q = p; q < per + n - 1; q++)
                {
                    *q = *(q + 1);
                }
                // free(q);
                // q = NULL;
                n--;
            }
        }
    }
    getchar();
}
// 显示
void Show(struct Books *per, int n)
{
    for (struct Books *p = per; p < per + n - 1; p++)
        printf("         %s\t%s\t%d\t%s\t%s\t%d\n", p->name, p->Authorname, p->ID, p->publishingHouse, p->publishDate, p->cost);
    printf("         共有%d个图书信息\n", n - 1);
    getchar();
}
// 查询
void Search(struct Books *per, int n)
{
    char name[30];
    printf("         请输入待查询书籍的书名:");
    gets(name);
    for (struct Books *p = per; p < per + n - 1; p++)
    {
        if (!(strcmp(p->name, name)))
            printf("         存在书籍信息：%s\t%s\t%d\t%s\t%s\t%d\n", p->name, p->Authorname, p->ID, p->publishingHouse, p->publishDate, p->cost);
    }
    getchar();
}
