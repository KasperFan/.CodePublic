#include<stdio.h>

int a[4][4]={{1},{6,1},{8,7,1},{9,5,3,1}}; 

int main()
{
	
	int i,j;
	// for(i=0;i<3;i++)
	// 	for(j=i+1;j<4;j++)
	// 		a[i][j]=a[j][i];   
	for(i=0;i<4;i++) 
	{
		for(j=0;j<4;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
        return 0;
}
