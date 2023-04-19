#include <stdio.h> 
int main()
{ 
    int i=1,a,s=0;
    while(scanf("%d",&a) != EOF)
    {
            while (i<=a)
            {
                s=s+i;
                i=i+1;
            }
            printf("%d\n\n",s);
    }
    return 0; 
}  