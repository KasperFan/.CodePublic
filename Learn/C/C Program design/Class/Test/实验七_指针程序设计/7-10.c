#include<stdio.h>
#define N 10

void input (int *p,int n){
    for(int i=0;i<n;i++)
    {
        scanf("%d",p);  
        p++;
    }
}

int main()
{   
    int pv_max(int *,int);           
    int a[N],*p=a;  
    input(p,N);
    printf("Max=%d\n",pv_max(a,N)); 
    return 0;
}
int pv_max(int *p,int n)
{   
    int i,max=*p; 
    for(i=1;i<n;i++)
		if(max<*(p+i))  
			max=*(p+i);   
    return max;
}
