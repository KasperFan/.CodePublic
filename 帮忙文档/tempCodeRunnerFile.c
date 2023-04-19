#include <stdio.h>
int main()
{
    int x,y,z,yu;
    scanf("%d%d%d",&x,&y,&z);
    if (y<0 || z<0) { printf("error\n"); return 0;}
    yu = (y-z*50)<=0 ? 0 : y-z*50;
    printf("%d\n",x+yu);
    return 0;
}
