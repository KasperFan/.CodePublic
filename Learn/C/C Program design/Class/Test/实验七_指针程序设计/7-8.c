#include<stdio.h>
int main()
{
	void swap(int *,int *);  /* 函数声明 */
	int x,y;
	scanf("%d,%d",&x,&y);
	if(x>y)
		swap(&x,&y); 
	printf("%d,%d\n",x,y);
    return 0;
}
void swap(int *p1,int *p2)  
{
	int temp;
	temp=*p1;*p1=*p2;*p2=temp;
}
