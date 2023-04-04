#include<stdio.h>
#define N 10
int main()
{
	int a[N],i;
	int *p=a+N;
	for(i=0;i<N;i++,p++) 
		scanf("%d",p); 
	for(i=N-1;i>=0;i--) { printf("%d ",*p); p--;}
	return 0;
}
