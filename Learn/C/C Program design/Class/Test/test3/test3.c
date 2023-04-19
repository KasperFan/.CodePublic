/*
Name    :   test3.1.c
Time    :   2022/09/27 19:20:09
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning C language Coding
*/
//3.1:
// #include<stdio.h>
// int main()
// {
//     int s1,s2,ave;
//     printf("输入两门课的成绩：");
//     scanf("%d,%d",&s1,&s2);
//     ave=(s1+s2)/2;
//     if (ave>=90)
//         printf("%d,优等生！",ave);
//     else
//         printf("%d,加油！",ave);
//     return 0;
// }

//3.2/3:
// #include<stdio.h>
// int main()
// {
// 	int s1,s2,ave;  
// 	printf("输入两门课的成绩：");
// 	scanf("%d,%d",&s1,&s2);
// 	ave=(s1+s2)/2; 
// 	if(s1>=90&&s2>=90) 
// 		printf("优等生!\n"); 
// 	else
// 		printf("加油!\n"); 
//     return 0;
// }

//3.4:
// #include<stdio.h>
// int main()
// {
// 	int s1,s2,ave;  
// 	printf("输入两门课的成绩：");
// 	scanf("%d,%d",&s1,&s2);
// 	ave=(s1+s2)/2; 
// 	if (s1>100||s1<0||s2>100||s2<0)
// 		printf("数据错误!"); 
// 	else if (s1>=90&&s2>=90)
//         printf("%d\n优等生!",ave);
//     else
// 		printf("%d\n加油!\n",ave); 
//     return 0;
// }

//3.5
#include<stdio.h>
int main(void)
{
	int s1,s2,ave;
    char t1,t2;
    printf("Test grade:");
    scanf("%c,%c",&t1,&t2);
	printf("Score: ");
	scanf("%d,%d",&s1,&s2);
    printf("%c,%c\n",t1,t2);
	ave=(s1+s2)/2; 
    switch (ave/10)
    {
    case 9:
        if (t1=='A'&&t2=='A')
            printf("Result: excellence\n");
        else
            printf("Result: all right\n");
        break;
    case 8:
        if (t1=='A'&&t2=='A')
            printf("Result: all right\n");
        else
            printf("Result: middling\n");
        break;
    case 7:
        if (t1=='A'&&t2=='A')
            printf("Result: middling\n");
        else
            printf("Result: pass\n");
        break;
    case 6:
        if (t1=='A'&&t2=='A')
            printf("Result: pass\n");
        else
            printf("Result: fail\n"); 
        break;
    default:
        printf("Result: fail\n"); 
    }
    return 0;
}
