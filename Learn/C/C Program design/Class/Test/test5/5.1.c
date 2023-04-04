#include<stdio.h>
int main()
{
    int i,a[10];               /* 定义a数组 */
    printf("Input:  ");
    for(i=0;i<10;i++) 
        scanf("%d",&a[i]);  /* 输入数据 */
    printf("Output: ");
    for(i=9;i>=0;i--)
        if (a[i]%2 == 0)
        {
            printf("%d ",a[i]);   /* 输出数据 */
        }
    return 0;
}