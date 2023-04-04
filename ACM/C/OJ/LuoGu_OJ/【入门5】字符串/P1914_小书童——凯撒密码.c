#include <stdio.h>
#include <string.h>

char str[52];

int main()
{
	int n,k;
	scanf("%d",&n);
    k=n%26;
	scanf("%s",str);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i]+k>122) str[i]=96+(str[i]+k-122)%26;
		else str[i]+=k;
	}
	printf("%s\n",str);
	return 0;
}
