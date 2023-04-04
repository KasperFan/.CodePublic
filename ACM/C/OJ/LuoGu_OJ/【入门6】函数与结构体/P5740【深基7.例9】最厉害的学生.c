/*
Name    :   P5740【深基7.例9】最厉害的学生.c
Time    :   2022/11/05 10:53:39
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

struct Student
    {
        char name[9];
        int yuWen,shuXue,yingYu;
        int Sum;
    }student[1005];

int main()
{
    int n,max=0,com;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s",student[i].name);
        scanf("%d%d%d",&student[i].yuWen,&student[i].shuXue,&student[i].yingYu);
        student[i].Sum=student[i].yuWen+student[i].shuXue+student[i].yingYu;
        if (max<student[i].Sum) { max=student[i].Sum; com=i;}
    }
    printf("%s %d %d %d\n",student[com].name,student[com].yuWen,student[com].shuXue,student[com].yingYu);
    return 0;
}
