#include<stdio.h>
int main()
{
	int fib[21]={0,1,1},i;     
	for(i=3;i<=20;i++)      
		fib[i]=fib[i-1]+fib[i-2];
	for(i=1;i<=20;i++)
	{
		printf("%-10d",fib[i]); 
		if((i+1)%5==0)
			printf("\n");      
	}
	return 0;
}
