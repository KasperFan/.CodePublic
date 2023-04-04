#include <stdio.h>
#include <string.h>

char str[102];

int main(){
   scanf("%s",str);
   for (int i = 0; i < strlen(str); i++)
      if (str[i]>='a' && str[i]<='z') str[i]-=32;
   printf("%s\n",str);
}
