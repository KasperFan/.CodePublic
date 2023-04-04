#include<stdio.h>
int main()
{
    int i=1,s=0;
    while(i<=100)
    {
        s=s+i;
        i=i+1;
        if (i==50)
        {
            continue;
        }
        printf("%d\n",i);
    };
    printf("sum=%d\f",s);
    return 0;
}
