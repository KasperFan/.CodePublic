#include<stdio.h>
int main()
{
    int m,a,b;               /*定义int型变量*/
    scanf("%d",&m);          /*扫描键盘输入的值*/
    printf("%d\n",m);        /*输出在键盘里输入的值*/
    a=m/5;                   /*除法运算*/
    b=m%5;                   /*求余运算*/
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
