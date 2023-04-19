// #include<stdio.h>
// #include<string.h>

// void fraction(char* data, int index){
// 	char newData[22];
// 	int j = 0, k = index-1, l = strlen(data)-1;
// 	while(data[k] == '0' && k != 0) k -- ;
// 	while(data[l] == '0' && l != index+1) l --;
// 	for(int i = k; i >= 0 ; i --) newData[j ++] = data[i];
// 	newData[j ++] = '/';
// 	for(int i = l; i >= index+1; i --) newData[j ++] = data[i]; 
// 	for(int i = 0; i < strlen(newData); i ++)
// 		printf("%c", newData[i]); 
// }

// void decimal(char* data, int index){
// 	char newData[22];
// 	int j = 0, k = index-1, l = index+1;
// 	while(data[k] == '0' && k != 0) k -- ;
// 	while(data[l] == '0' && l != strlen(data)-1) l ++;
// 	for(int i = k; i >= 0 ; i --) newData[j ++] = data[i];
// 	newData[j ++] = '.';
// 	for(int i = strlen(data)-1; i >= l; i --) newData[j ++] = data[i]; 
// 	for(int i = 0; i < strlen(newData); i ++)
// 		printf("%c", newData[i]);
// } 

// void percentage(char* data){
// 	char newData[22];
// 	int k = strlen(data)-2;
// 	while(data[k] == '0' && k != 0) k --;
// 	for(int i = k; i >= 0 ; i --) printf("%c", data[i]);
// 	printf("%%");
// } 

// void integer(char* data){
// 	char newData[22];
// 	int k = strlen(data)-1;
// 	while(data[k] == '0' && k != 0) k --;
// 	for(int i = k; i >= 0 ; i --) printf("%c", data[i]);
// } 

// int main(){
// 	char data[22]; 
// 	gets(data);
	
// 	int flag = 0;
// 	if(data[strlen(data)-1] == '%'){
// 		percentage(data);
// 		return 0;
// 	} 
// 	for(int i = 0; i < strlen(data); i ++){
// 		if(data[i] == '/'){ 
// 			fraction(data, i);
// 			flag = 1;
// 			break;
// 		}
// 		else if(data[i] == '.'){
// 			decimal(data, i);
// 			flag = 1;
// 			break;
// 		}
// 	} 
// 	if(!flag)
// 		integer(data); 
// } 





// #include<stdio.h>
// int main()
// {
//  int x=2,y=3,m=2,i;
//     char ch='a';
//     scanf_s("%d",&m);
//     for (i=1;i<=m;i++){
 
//       //scanf("%c %d %d",&ch,&x,&y);
//       int jia=x+y;
//    int jian=x-y;
//    int cheng=x*y; 
//    if(ch =='a'){
//      printf("%d+%d=%d\n",x,y,jia);
//      char str[]="x+y=jia";
//      puts(str);
//      printf("%d\n",sizeof(str)); 
//       }
//       if(ch=='b'){
//         printf("%d-%d=%d\n",x,y,jian);
//         char str[]="x-y=jian";
//         printf("%d\n",sizeof(str));
//    }
   
   
//    if(ch =='c'){
//   printf("%d*%d=%d\n",x,y,cheng);
//   char str[]="x*y=cheng";
//   printf("%d\n",sizeof(str));
//    }
// }
//     return 0;
// }



#include<stdio.h>
#include<string.h>

char data[100005]={144};
int change(int l, int r){
	int n = 0;
	for(int i = l; i < r; i ++)
		n = n * 8 + data[i]-'0';
	return n;
} 

void define(int len){
	int low = len-4>0?len-4:0;
	int n = change(low, len);
	
	if(low){
		define(low);
		printf("%03x", n);
	}else{
		printf("%x", n);
	} 
}

int main(){
    //gets(data);
    define(strlen(data));
    return 0;
}