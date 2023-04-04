#include<stdio.h>
const float PI=3.14;
#define pow() r*r
int main()
{
    float r,s;
    printf("输入圆的半径：");
    scanf("%f",&r);
    s=PI*pow();
    printf("%-.2f\n",s);
    return 0;
}
