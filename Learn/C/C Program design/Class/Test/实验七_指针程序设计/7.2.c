#include<stdio.h>
int main()
{
	int *p1,*p2,*p,a,b; 
	printf("Input: ");
	scanf("%d,%d",&a,&b); 
	p1=&a;           /* 使p1指向a */  
	p2=&b;           /* 使p2指向b */  
	if(a<b) 
	{  	
        p=p1;
		p1=p2;
		p2=p;
	} 
	printf("Output: %d,%d\n",*p1,*p2);
	return 0;
}
