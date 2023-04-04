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
void Menu();
void input(struct student *, int);
void show(struct student *);

int main()
{
	char password[6];
	int j;
	printf("please input password:");
	for (j = 0; j <= 3; j++)
	{
		scanf("%s", password);
		if (strcmp(password, "123456\0") == 0)
		{
			printf("password is right!\n");
			break;
		}
		else
		{
			if (j < 2)
				printf("error input again:");
			else
				printf("password error!\n");
		}
	}
	Menu();
	input(stu, N);
	show(stu);
	return 0;
}

void Menu()
{
	printf("\n密码正确！\n");
	printf("------学生信息管理系统--------\n");
	printf("*       1. 学生信息录入          *\n");
	printf("*       2. 学生信息显示          *\n");
	printf("*       3. 学生信息查询          *\n");
	printf("*       4. 学生信息排序          *\n");
	printf("*       5. 学生信息修改          *\n");
	printf("*       6. 学生信息删除          *\n");
	printf("*       0. 退出系统              *\n");
	printf("----------------------------------\n");
	printf("----------------------------------\n");
	int choise;
	switch (choise)
	{
	case 0:
		exit(0);
		break;
	case 1:
		input(stu, N);
		system("pause");
		system("cls");
		break; // 录入
	case 2:
		show(stu);
		system("pause");
		system("cls");
		break; // 显示
	case 3:
		found();
		system("pause");
		system("cls");
		break; // 查询
	case 4:
		sort();
		system("pause");
		system("cls");
		break; // 排序
	case 5:
		modify();
		system("pause");
		system("cls");
		break; // 修改
	case 6:
		delet();
		system("pause");
		system("cls");
		break; // 删除
	default:
		printf("\n输入错误，请输入0---6\n\n");
		system("pause");
		system("cls");
		break;
	}
}
void input(struct student *p, int n)
{
	int i;
	FILE *fp;
	if ((fp = fopen("stu_list", "wb")) == NULL)
	{
		printf("Can not open file\n");
		exit(1);
	}
	for (i = 0; i < n; i++)
	{
		printf("please input Number %d 's information\n :num: \n name:\n  age:\n  sex:\n  data: \n address:\n phone:\n Email:\n ", i + 1);
		scanf("%d%s%d%s%s%s%d%s", &stu[i].num, stu[i].name, &stu[i].age, &stu[i].sex, stu[i].data, stu[i].address, &stu[i].phone, stu[i].Email);
		if (p->num == 0)
			break;
	}
	fwrite(&stu, sizeof(struct student), N, fp);
	for (i = 0; i < n; i++)
	{
		if (fwrite(&stu[i], sizeof(struct student), 1, fp))
			printf("Success\n");
		else
			printf("Defeat\n");
	}
	fclose(fp);
}
void show(struct student *p)
{
	int i;
	for (i = 0; i < N; i++)
		printf("Num %d student's information is num:%d name:%s age:%d sex:%s data:%s address:%s phone:%d  Email:%s", i + 1, stu[i].num, stu[i].name, stu[i].age, stu[i].sex, stu[i].data, stu[i].address, stu[i].phone, stu[i].Email);
}
