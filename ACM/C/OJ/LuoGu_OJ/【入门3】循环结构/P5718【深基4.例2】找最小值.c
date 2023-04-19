#include <stdio.h>

int main(){
   int n,min=1000;
   scanf("%d",&n);
   int num[n];
   for (int i = 0; i < n; i++){
      scanf("%d",&num[i]);
      min=min<num[i] ? min : num[i];
   }
   printf("%d\n",min);
   return 0;
}
