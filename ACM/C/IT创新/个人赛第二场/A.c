#include <stdio.h>
#include <string.h>

char in[1050];
int lenth;

int main()
{
    scanf("%s",in);
    
    for (int i = 0; i < strlen(in); i++)
    {
        lenth=strlen(in);
        while (in[i]==in[i+1])
        {
            for (int j = i; j < lenth; j++)
            {
                in[j]=in[j+1];
            }
        }
    }
    printf("%s\n",in);
    return 0;
}

