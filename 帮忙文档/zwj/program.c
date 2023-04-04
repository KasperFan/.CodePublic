#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50
void menu();
void add();
void modify();
void stat();
void search();
int load();
struct equip
{
    char id;       /*编号*/
    char kind;     /*种类 */
    char name;     /*名称*/
    char price;    /*价格*/
    char in_date;  /*购入日期*/
    char reject;   /*报废情况*/
    char out_date; /*报废日期*/
};

void menu()
{
    int n;
    printf("\t\t***************Menu***************\n\n");
    printf("\t\t\t\t 1.添加您所需实验设备的信息");
    printf("\t\t\t\t 2.修改您所需实验设备的信息");
    printf("\t\t\t\t 3.统计您所需实验设备的信息");
    printf("\t\t\t\t 4.查询您所需实验设备的信息");
    printf("\t\t\t\t 5.退出");
    printf("\n\n\t\t*******************************\n");
    printf("请选择你所需服务的号码(1-5): []\b\b");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        add();
        break;
    case 2:
        modify();
        break;
    case 3:
        stat();
        break;
    case 4:
        search();
        break;
    case 5:
        exit(0);
    default:
        menu();
    }
}
void main()
{
    menu();
    getchar();
}
void add()
{
    int i;
    FILE *fp;
    fp = fopen("eup.txt", "a");
    if ((fp = fopen("eup.txt", "a")) == NULL)
    {
        printf("cannot open file\n");
    }
    printf("\n 输入:编号\t种类\t名称\t价格\t购入日期\t是否报废\t报废日期\n");
    scanf("%s", temp.id);
    scanf("%s", temp.kind);
    scanf("%s", temp.name);
    scanf("%s", temp.price);
    scanf("%s", temp.in_date);
    scanf("%s", temp.reject);
    scanf("%s", temp.out_date);
    fprintf(fp, "\n%s\t%s\t%s\t%s\t%s\t%s\t%s", temp.id, temp.kind, temp.name, temp.price, temp..in_date, temp.reject, temp.out_date);
    fclose(fp);
    printf("\n\n\t successful.\n\n");
    printf("\n********************************\n")
        printf("\t1.继续添加\t2.返回主菜单\t3.退出\n") : printf("\n*********************************\n");
    printf("\n\n 输入你要选择的号码(1-3):");
    scanf("%d", &i);
    if (i == 1)
    {
        add()
    }
    if (i == 2)
    {
        menu();
    }
    if (i == 3)
    {
        exit(0);
    }
}                         