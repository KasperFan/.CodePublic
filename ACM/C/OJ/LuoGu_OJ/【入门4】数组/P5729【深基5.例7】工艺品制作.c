/*
Name    :   P5729【深基5.例7】工艺品制作.c
Time    :   2022/11/13 18:26:56
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int model[21][21][21];
int w,x,h,q,cnt;

int main()
{
    scanf("%d %d %d", &w, &x, &h);
    scanf("%d",&q);
    for (int a = 0; a < q; a++)
    {
        int x1,x2,y1,y2,z1,z2;
        scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
        for (int i = x1; i <= x2; i++)
            for (int j = y1; j <= y2; j++)
                for (int k = z1; k <= z2; k++)
                {
                    model[i][j][k]=1;
                }
    }
    for (int i = 1; i <= w; i++)
        for (int j = 1; j <= x; j++)
            for (int k = 1; k <= h; k++)
                if (model[i][j][k]!=1) cnt++;
    printf("%d\n",cnt);
    return 0;
}
