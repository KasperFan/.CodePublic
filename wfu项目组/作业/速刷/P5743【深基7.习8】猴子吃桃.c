/*
Name    :   P5743.c
Time    :   2022/10/28 01:12:42
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    long num=1;int n;//定义更长的整数类型变量num和一般的整数类型变量n
    scanf("%d",&n);//从键盘输入n的值
    for (int i = 0;//在函数里临时定义一个整数类型变量i，初值为0
     i < n-1;//判断i的值是否小于n-1，若满足，则执行循环体（第19-21行）
      i++)//执行一次循环体后执行i++（也就是i=i+1）
    {
        num=(num+1)*2;//先算括号内，再乘以2  最后把所得的结果拿给num成为它的新值
    }
    
    printf("%ld\n",num);//输出num里面的值
    return 0;
}
