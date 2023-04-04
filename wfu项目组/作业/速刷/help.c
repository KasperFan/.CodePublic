    // #include<stdio.h>
    // #include<string.h>
    // int len (int n)
    // {
    //     int cnt=0;
    //     if(n<0)
    //     cnt++; 
    //     do
    //     {
    //         n/=10;
    //         cnt++; 
    //     }
    //     while (n!=0);
    //     return cnt;
    // }


    // int main()
    // {
    // int x,y,n,i;
    // char ch;
    // scanf("%d",&n);
    // getchar();
    // printf("%d\n",n);
    // for(i=0;i<n;i++)
    // {
    // scanf("%1c",&ch);
    // scanf("%d%d",&x,&y);
    
    // if(ch=='a'){
    //     printf("%d+%d=%d\n",x,y,x+y);
    //     int s=len(x)+len(y)+len(x+y)+2;
    //     printf("%d\n",s);
    // }

    // if(ch=='b')
    // {
    //     printf("%d-%d=%d\n",x,y,x-y);
    //     int s=len(x)+len(y)+len(x-y)+2;
    //     printf("%d\n",s);
    // } 
    
    
    // if(ch=='c'){
    //     printf("%d*%d=%d\n",x,y,x*y);
    //     int s=len(x)+len(y)+len(x*y)+2;
    //     printf("%d\n",s);
    // } 
    
    // }
    //     return 0;
        
    // } 

    #include <stdio.h>
    #include <string.h>
    int main()
    {
        int x,s;
        scanf("%d",&x);
        char str1[100003],str2[100003];
        sprintf(str1,"%d",x);
        for (int i = 0; i < strlen(str1); i++)
            str2[i]=str1[strlen(str1)-1-i];
        sscanf(str2,"%d",&s);
        printf("%d\n",s);
        return 0;
    }
    