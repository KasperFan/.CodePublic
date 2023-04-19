#include<stdio.h>
#define N 100
int main()
{
	char str[N],*p; 
	int count; 
	p=str; 
	gets(p);                 /* 输入字符串 */
	for(count=0;*p!='\0';p++) 
		if(*p>'0'&&*p<='9') 
			count++;
	printf("Total: %d\n",count);
	return 0;
}
