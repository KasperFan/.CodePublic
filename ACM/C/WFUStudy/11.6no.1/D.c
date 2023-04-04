/*
Name    :   P2089 烤鸡.c
Time    :   2022/11/06 10:23:19
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    int x,cont=0;
    scanf("%d",&x);
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            for (int k = 1; k <= 3; k++)
                for (int l = 1; l <= 3; l++)
                    for (int m = 1; m <= 3; m++)
                        for (int n = 1; n <= 3; n++)
                            for (int o = 1; o <= 3; o++)
                                for (int p = 1; p <= 3; p++)
                                    for (int q = 1; q <= 3; q++)
                                        for (int r = 1; r <= 3; r++)
                                            if (i+j+k+l+m+n+o+p+q+r==x) {cont++;break;}
    printf("%d\n",cont);
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            for (int k = 1; k <= 3; k++)
                for (int l = 1; l <= 3; l++)
                    for (int m = 1; m <= 3; m++)
                        for (int n = 1; n <= 3; n++)
                            for (int o = 1; o <= 3; o++)
                                for (int p = 1; p <= 3; p++)
                                    for (int q = 1; q <= 3; q++)
                                        for (int r = 1; r <= 3; r++)
                                            if (i+j+k+l+m+n+o+p+q+r==x) printf("%d %d %d %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o,p,q,r);
    return 0;
}
