/*
Name    :   P5714.c
Time    :   2022/11/03 16:27:44
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    double m,h,BMI;
    scanf("%lf%lf",&m,&h);
    BMI=m/(h*h);
    if (BMI < 18.5) printf("Underweight\n");
    else if (BMI>=18.5 && BMI<24) printf("Normal\n");
    else printf("%.4lf\nOverweight\n",BMI);
    return 0;
}
