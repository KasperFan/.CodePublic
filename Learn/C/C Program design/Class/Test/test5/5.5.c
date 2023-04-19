// 5．一维数组应用	
// 修改例5-11的排序程序，实现对N个实数的降序排序。

#include<stdio.h>
#define N 10
int main()
{
	int a[N],i,j,temp;
	printf("Input data: ");
	for(i=0;i<N;i++) 
		scanf("%d",&a[i]);
	for(i=1;i<N;i++)         	
		for(j=0;j<N-i;j++)
			if(a[j]>a[j+1]) 
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
        printf("Result: ");
	for(i=N-1;i>=0;i--)        	
		printf("%d  ",a[i]);
	printf("\n");
        return 0;
}
