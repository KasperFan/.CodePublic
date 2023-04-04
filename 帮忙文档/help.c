// #include<stdio.h>
// #include<math.h>
// #define N 5
// int main()
// {
//     int i,k,sk;
//     printf("Data:\n");
//     scanf("%d",&k);
//     sk=(int)sqrt(k);
//     for (i = 2; i <= sk; i++)
//         if (k%i==0) break;
//     if (i>sk)
//         printf("%d,yes!\n",k);
//     else
//         printf("%d,no!\n",k);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int f,f1,f2,i;
//     f1=f2=1;
//     printf("%10d%10d",f1,f2);
//     for ( i = 3; i <= N; i++)
//     {
//         f=f1+f2;
//         f1=f2;
//         f2=f;
//         printf("%10d",f);
//         if (i%5==0)
//         {
//             printf("\n");
//         }
        
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i,j;
//     for ( i = 0; i <= N; i++)
//     {
//         for ( j = 0; j < i; j++)
//             printf("*");
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int x=2,y=-1,z=2;
//     if (x<y){
//         if (y<0)z=0;
//     }else z+=1;
//     printf("%d\n",z);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int f1=1,f2=2,a=50,c;
//     //scanf("%d",&a);
//     if (a==1)
//     printf("%d\n",f1);
//     else if (a==2)
//     printf("%d\n",f2);
//     else
//     {
//         for(int i=3;i<=a;i++)
//         {
//             c=f1;
//             f1=f2;
//             f2=c+f1;
//             if (i%5==0)
//             {
//                 /* code */
//             }
            
//         }
//         printf("%d\n",f2);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     printf("%d\n",b);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i < 5; i++)
//     {
//         for (int a = 4; a > i; a--)
//             putchar(' ');
//         for (int b = 0; b < i*2-1; b++)
//                 putchar('*');
//         printf("\n");
//     }
//     for (int i = 3; i > 0; i--)
//     {
//         for (int a = 4; a > i; a--)
//             putchar(' ');
//         for (int b = 0; b < 2*i-1; b++)
//                 putchar('*');
//         printf("\n");
//     }
//     return 0;
// }

int main(int argc, char const *argv[])
{
    // char a[]={'a','b','c','d','e','f'};
    // char b[]="abcdef";
    // int m[][2]={1,3,5,7,9};
    // int a[3][]={1,2,3,4,5,6,7};
    int flag;
    char ch='1';
    //scanf("%c",&ch);
    flag=ch>='0'&&ch<='9';
    if(flag)
        printf("%c\n",ch);
    return 0;
}
