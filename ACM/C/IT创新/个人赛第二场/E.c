#include <stdio.h>
#include <string.h>

char in[100];
int n,flag,out[110];

int main()
{
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s",in);
        int a=strlen(in),j;
        for ( j = 1; j < a; j++)
        {
            flag=1;
            for (int k = 0; k < a-j; k++)
            {
                flag = 1;
                if (in[k]!=in[k+j]) { flag=0; break;}
            }
            if (flag) { out[i]=j; break;}
        }
        if (j>=a) out[i]=0;
        for (int z = 0; z < a; z++) in[z]=0;
    }
    for (int i = 0; i < n; i++) printf("%d\n",out[i]);
    return 0;
}