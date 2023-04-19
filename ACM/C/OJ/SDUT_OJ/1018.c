#include <stdio.h>
int main()
{
    long long f1=1,f2=2,a,c;
    scanf("%d",&a);
    if (a==1)
    printf("%d\n",f1);
    else if (a==2)
    printf("%d\n",f2);
    else
    {
        for(int i=3;i<=a;i++)
        {
            c=f1;
            f1=f2;
            f2=c+f1;
        }
        printf("%lld\n",f2);
    }
    return 0;
}