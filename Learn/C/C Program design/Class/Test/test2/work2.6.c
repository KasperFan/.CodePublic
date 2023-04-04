#include<stdio.h>
int main()
{
    float gradeA,gradeB,ave;
    printf("请输入第一门考试的成绩：");
    scanf("%f",&gradeA);
    printf("请输入第二门考试的成绩：");
    scanf("%f",&gradeB);
    ave=(gradeA+gradeB)/2;
    printf("两门课程的平均成绩为：%.1f\n",ave);
    return 0;
}
