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
// 删除学生信息
void Delete_Printf(struct student* stu)
{
	system("cls");
	int id;

	struct student* p;

	printf("请输入要删除的学生的学号：");
	scanf("%d", &id);
	struct student* st = Search_id(id, stu);
	p = st;

	if (st == NULL)
	{
		printf("查无此人！\n");
		return;
	}

	printf("________________________________________________________________\n");
	printf("|学号\t|姓名\t|年龄\t|性别\t|出生年月\t\t|地址\t\t|电话\t|E-mail\t|\n");
	printf("________________________________________________________________\n");
	printf("%d|%s\t|%d\t|%c\t|%s\t|%s\t|%d\t|%s\t|\n", st->num, st->name, st->age, st->sex, st->data, st->address, st->phone, st->Email);
	printf("________________________________________________________________\n");

	Delete(p);
	// 保存信息
	Save_FILE(stu);
}
