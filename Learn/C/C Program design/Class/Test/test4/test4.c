#include<stdio.h>
#define N 5
int main()
{
	int score,i,sum=0; 
	for(i=0;i<N;i++)
	{
		printf("Data：");
		scanf("%d",&score);  
		sum=sum+score;  
	}
	printf("Average: %d\n",sum/N); 
    return 0;
}
