#include <stdio.h>

int main()
{
    int a=3,b=4,*p1,*p2;
    p1=&a;
    p2=&b;
    scanf("%d,%d",p1,p2);
    printf("%x,%x\n",p1,p2);
    return 0;
}
