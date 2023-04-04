#include<stdio.h>
#define N 100
int main()
{
	char str[N];            /* 定义字符数组str */
	printf("String: ");
	//scanf("%s",str);               /* 输入字符串到str数组 */
    fgets(str,100,stdin);
	printf("Result: ");
	printf("%s",str);               /* 输出str数组中的字符串 */
    return 0;
}
