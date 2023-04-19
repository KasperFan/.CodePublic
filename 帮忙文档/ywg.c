#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 定义一个学生类型的结构体
struct Student
{
    char name[25]; // 名字
    int age;       // 年龄
    int num;       // 学号
    int c;         // 班级
    float date;    // 日期
    int num1;      // 打卡次数
};
void PrintfStudentFunction();
// 学生的人数
int numCount = 0;
// 申请空间的容量
int count = 0;
// 得到学生人数
int Num();
// 定义一个输入函数 用来输入学生的信息
struct Student *Input(struct Student *pArr, int len);
// 输出信息方法
void Output(struct Student *pArr);
// 删除信息
void Delete(struct Student *PArr);
// 查找信息
void Search(struct Student *PArr);
// 修改学生信息
void Change(struct Student *PArr);
// 添加学生信息
struct Student *Add(struct Student *PArr);
// 排序
void Order(struct Student *PArr);
// 统计学生数据
void studentsta(struct Student *PArr);
int main()
{
    struct Student *pArr = NULL;
    struct Student *P = NULL;
    printf("============================================\n");
    printf("============================================\n");
    printf("============================================\n");
    printf("**************欢迎来到考勤系统**************\n");
    printf("============================================\n");
    printf("============================================\n");
    printf("============================================\n");
    printf("....请按任意键进入考勤系统  <(￣︶￣)↗[GO!]\n");
    getchar();
    system("cls");
    PrintfStudentFunction();
    while (1)
    {
        printf("请选择操作的命令:\n");
        int item, num;
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            // 录入信息
            {
                system("cls");
                num = Num();
                P = Input(pArr, num);
            }
            break;
        case 2:
            // 输出学生信息
            {
                system("cls");
                Output(P);
            }
            break;
        case 3:
            // 删除学生信息
            {
                system("cls");
                Delete(P);
            }
            break;
        case 4:
            // 修改学生信息
            {
                system("cls");
                Change(P);
            }
            break;
        case 5:
            // 查询学生信息
            {
                system("cls");
                Search(P);
            }
            break;
        case 6:
            // 添加学生信息
            {
                system("cls");
                P = Add(P);
            }
            break;
        case 7:
            // 排序
            {
                system("cls");
                Order(P);
            }
            break;
        // 数据统计
        case 8:
        {
            system("cls");
            studentsta(P);
        }
        break;
        case 9:
            // 退出系统
            {
                // 程序结束
                system("cls");
                exit(0);
            }
            break;
        default:
            printf("用户输入错误,请重新输入\n");
            break;
        }
    }

    return 1;
}

void PrintfStudentFunction()
{

    printf("-------------------------------------------------\n");
    printf("-----------------学生管理系统--------------------\n");
    printf("-----------------1.录入学生信息------------------\n");
    printf("-----------------2.输出学生信息------------------\n");
    printf("-----------------3.删除学生信息------------------\n");
    printf("-----------------4.修改学生信息------------------\n");
    printf("-----------------5.查询学生信息------------------\n");
    printf("-----------------6.添加学生信息------------------\n");
    printf("-----------------7.排序（姓名、学号、打卡次数）--\n");
    printf("-----------------8.考勤数据统计------------------\n");
    printf("-----------------9.退出系统------o(￣ヘ￣o＃)----\n");
}
// 得到学生人数
int Num()
{

    int num;
    printf("请输入要录入学生的人数\n");
    scanf("%d", &num);
    return num;
}

struct Student *Input(struct Student *pArr, int len)
{
    // 录入学生信息
    count = len;
    // 开辟存储空间
    pArr = (struct Student *)malloc(sizeof(struct Student) * len);
    for (int i = 0; i < len; i++)
    {
        // 当前学生人数+1
        numCount++;
        printf("请输入第%d个学生的名字:\n", i + 1);
        scanf("%s", pArr[i].name);
        printf("请输入第%d个学生的年龄\n", i + 1);
        scanf("%d", &pArr[i].age);
        printf("请输入第%d个学生的学号\n", i + 1);
        scanf("%d", &pArr[i].num);
        printf("请输入第%d个学生的班级\n", i + 1);
        scanf("%d", &pArr[i].c);
        printf("请输入第%d个学生的打卡时间\n", i + 1);
        scanf("%f", &pArr[i].date);
        printf("请输入第%d个同学的打卡次数\n", i + 1);
        scanf("%d", &pArr[i].num1);
    }
    printf("学生信息录入完毕!!!!!!!\n");
    system("cls");
    PrintfStudentFunction();
    return pArr;
}
// 输出学生信息
void Output(struct Student *pArr)
{
    printf("姓名\t年龄\t学号\t班级\t打卡时间\t打卡次数\n");
    for (int i = 0; i < numCount; i++)
    {
        printf("%s\t%d\t%d\t%d\t%.2f\t%10d\n", pArr[i].name, pArr[i].age, pArr[i].num,
               pArr[i].c, pArr[i].date, pArr[i].num1);
    }
    PrintfStudentFunction();
}

// 删除信息
void Delete(struct Student *PArr)
{
    char name[25];
    int num;
    printf("请输入你要删除数据的名字\n");
    scanf("%s", name);
    for (int i = 0; i < numCount; i++)
    {
        if (strcmp(PArr[i].name, name) == 0)
        {
            num = i;
            break;
        }
    }
    // num = 1;
    for (int i = num; i < numCount - 1; i++)
    {
        PArr[i] = PArr[i + 1];
    }
    numCount--;
    Output(PArr);
}

// 查找信息
void Search(struct Student *pArr)
{
    printf("请输入要查找学生的名字\n");
    char name[25];
    scanf("%s", name);
    int num;
    int i;
    for (i = 0; i < numCount; i++)
    {
        if (strcmp(pArr[i].name, name) == 0)
        {
            printf("%s\t%d\t%d\t%d\t%f\t%d\n", pArr[i].name, pArr[i].age, pArr[i].num, pArr[i].c, pArr[i].date, pArr[i].num1);
            break;
        }
    }

    if (i == numCount)
    {
        printf("对不起没有你要查找的数据\n");
    }

    PrintfStudentFunction();
}

// 修改学生信息
void Change(struct Student *PArr)
{
    char name[25];
    printf("请输入你要修改学生的名字:\n");
    scanf("%s", name);
    int num = 0;
    int i = 0;
    for (i = 0; i < numCount; i++)
    {
        if (strcmp(PArr[i].name, name) == 0)
        {
            num = i;
            break;
        }
    }
    if (num == i)
    {
        printf("请输入学生的名字:\n");
        scanf("%s", PArr[num].name);
        printf("请输入学生的年龄:\n");
        scanf("%d", &PArr[num].age);
        printf("请输入学生的学号:\n");
        scanf("%d", &PArr[num].num);
        printf("请输入学生的班级\n");
        scanf("%f", &PArr[num].c);
        printf("请输入学生的打卡时间\n");
        scanf("%f", &PArr[num].date);
        printf("请输入学生的打卡次数\n");
        scanf("%f", &PArr[num].num1);
    }
    else
    {
        printf("对不起没有要修改的学生信息");
    }
    PrintfStudentFunction();
}

// 添加学生信息
struct Student *Add(struct Student *PArr)
{
    printf("请输入要添加的人数\n");
    int num;
    scanf("%d", &num);
    if (numCount + num > count)
    {
        struct Student *p = NULL;
        p = PArr;
        PArr = (struct Student *)malloc(sizeof(struct Student) * (numCount + num));
        count = numCount + num;
        for (int i = 0; i < numCount; i++)
        {
            PArr[i] = p[i];
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("请输入第%d个添加学生的名字:\n", i + 1);
        scanf("%s", PArr[numCount].name);
        printf("请输入第%d个添加学生的年龄:\n", i + 1);
        scanf("%d", &PArr[numCount].age);
        printf("请输入第%d个添加学生的学号:\n", i + 1);
        scanf("%d", &PArr[numCount].num);
        printf("请输入第%d个添加学生的班级:\n", i + 1);
        scanf("%f", &PArr[numCount].c);
        printf("请输入第%d个添加学生的打卡时间:\n", i + 1);
        scanf("%f", &PArr[numCount].date);
        printf("请输入第%d个添加学生的打卡次数:\n", i + 1);
        scanf("%f", &PArr[numCount].num1);
        numCount++;
    }
    printf("数据添加成功");
    PrintfStudentFunction();
    return PArr;
}
void Order(struct Student *PArr)
{
    int op;
    struct Student temp;
    printf("<1>学号升序  <2>姓名升序  <3>打卡次数降序\n");
    scanf("%d", &op);
    if (op == 1)
    {
        // 将学生信息按学号排序
        for (int i = 0; i < numCount - 1; i++)
        {
            for (int j = 0; j < numCount - i - 1; j++)
            {
                if (PArr[j].num > PArr[j + 1].num)
                {
                    temp = PArr[j];
                    PArr[j] = PArr[j + 1];
                    PArr[j + 1] = temp;
                }
            }
        }
    }
    // 将学生信息按姓名排序
    else if (op == 2)
    {
        void StudentNameAsc(struct Student * PArr);
        {
            struct Student temp;
            for (int i = 0; i < numCount - 1; i++)
            {
                for (int j = 0; j < numCount - i - 1; j++)
                {
                    if (PArr[j].name[0] > PArr[j + 1].name[0])
                    {
                        temp = PArr[j];
                        PArr[j] = PArr[j + 1];
                        PArr[j + 1] = temp;
                    }
                }
            }
        }
    }
    // 将学生信息按打卡次数排序
    else
    {
        struct Student temp;
        for (int i = 0; i < numCount - 1; i++)
        {
            for (int j = 0; j < numCount - i - 1; j++)
            {
                if (PArr[j].num1 < PArr[j + 1].num1)
                {
                    temp = PArr[j];
                    PArr[j] = PArr[j + 1];
                    PArr[j + 1] = temp;
                }
            }
        }
    }
    Output(PArr);
}

// 数据统计
void studentsta(struct Student *PArr)
{
    printf("请输入应打卡次数：\n");
    int num2;
    scanf("%d", &num2);
    for (int i = 0; i < numCount; i++)
    {
        if (num2 > PArr[i].num1)
            printf("%s没有打卡%d次\n", PArr[i].name, num2 - PArr[i].num1);
    }
    Output(PArr);
}
