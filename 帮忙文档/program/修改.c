#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
struct student
{
	int num;		  // 学号
	char name[20];	  // 姓名
	int age;		  // 年龄
	char sex;		  // 性别
	char data[10];	  // 出生年月
	char address[60]; // 地址
	int phone;		  // 电话
	char Email[20];	  // E-mail
} stu[N];
// 修改学生信息
void Fix(struct student *p, int n)
{
	system("cls");
	int id;
	printf("请输入要查找的学生的学号：");
	scanf("%d", &id);
	struct student *st = Search_id(id, stu);

	if (st == NULL)
	{
		printf("查无此人！\n");
		return;
	}

	int choice = 0;
	while (1)
	{
		system("cls");

		// 输出一次所要修改的学生成绩
		printf("________________________________________________________________\n");
		printf("|学号\t|姓名\t|年龄\t|性别\t|出生年月\t\t|地址\t\t|电话\t|E-mail\t|\n");
		printf("________________________________________________________________\n");
		printf("%d|%s\t|%d\t|%c\t|%s\t|%s\t|%d\t|%s\t|\n", st->num, st->name, st->age, st->sex, st->data, st->address, st->phone, st->Email);
		printf("________________________________________________________________\n");

		printf("修改姓名 ---- 1\n");
		printf("修改性别 ---- 2\n");
		printf("修改年龄 ---- 3\n");
		printf("修改地址 ---- 4\n");
		printf("修改电话 ---- 5\n");

		printf("请输入要修改的信息：");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("请输入姓名：");
			scanf("%s", st->name);
			break;
		case 2:
			printf("请输入性别：");
			scanf("%s", st->sex);
			break;
		case 3:
			printf("请输入年龄：");
			scanf("%s", st->age);
			break;
		case 4:
			printf("请输入地址：");
			scanf("%s", st->address);
			break;
		case 5:
			printf("请输入电话：");
			scanf("%d", st->phone);
			break;
		}
		printf("是否继续修改该学生信息？（Yes：1 / No：0）：");
		scanf("%d", &choice);
		if (choice == 0)
		{
			break;
		}
	}

	// 修改完成后该学生的信息
	printf("________________________________________________________________\n");
	printf("|学号\t|姓名\t|年龄\t|性别\t|出生年月\t\t|地址\t\t|电话\t|E-mail\t|\n");
	printf("________________________________________________________________\n");
	printf("%d|%s\t|%d\t|%c\t|%s\t|%s\t|%d\t|%s\t|\n", st->num, st->name, st->age, st->sex, st->data, st->address, st->phone, st->Email);
	printf("________________________________________________________________\n");

	// 保存信息
	Save_FILE(stu);
}
