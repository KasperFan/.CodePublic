/*
Name    :   P5717【深基3.习8】三角形分类.c
Time    :   2022/11/06 02:48:50
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int a,b,c,sum,max=0,min=10000;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    max = max < a ? a : max;
    max = max < b ? b : max;
    max = max < c ? c : max;
    min = min > a ? a : min;
    min = min > b ? b : min;
    min = min > c ? c : min;
    a=min;b=sum-max-min;c=max;
    if (a+b<=c) {printf("Not triangle\n"); return 0;}
    if (a*a+b*b==c*c) printf("Right triangle\n");
    else if (a*a+b*b>c*c) printf("Acute triangle\n");
    else if (a*a+b*b<c*c) printf("Obtuse triangle\n");
    if (a==b) printf("Isosceles triangle\n");
    if (a==b && b==c && a==c) printf("Equilateral triangle\n");
    return 0;
}
