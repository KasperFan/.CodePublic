/*
Name    :   P1424_小鱼的航程(改进版).c
Time    :   2022/11/08 09:15:55
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>

int main()
{
    long long x,n,cout=0ll,mile=0ll;
    int i;
    scanf("%lld%lld",&x,&n);
    i=x;
    while (cout<n)
    {
        switch (i)
        {
        case 7:
            cout++;
            i=1;
            break;
        
        case 6:
            cout++;
            i++;
            break;
        
        default:
            cout++;
            mile+=250;
            i++;
            break;
        }
    }
    printf("%lld\n",mile);
    return 0;
}
