#include <stdio.h>
#include <string.h>
#include <math.h>
//D



// int gcd(int a,int b) {
//     return b > 0 ? gcd(b, a%b) : a;
// }

// char str[102];int num[5];

// int main()
// {
//     int n,k,z;
//     while (scanf("%d",&n))
// {
//     if (n==0) return 0;
//     scanf("%s",str);
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i]=='a') num[1]++;//A
//         if (str[i]=='v') num[2]++;//v
//         if (str[i]=='i') num[3]++;//i
//         if (str[i]=='n') num[4]++;//n
//     }
//     num[0]=num[1]*num[2]*num[3]*num[4];
//     z=pow(n,4);
//     k=gcd(num[0],z);
//     if (num[0]!=0)
//     {
//         printf("%d/%d\n",num[0]/k,z/k);
//     }else printf("0/1\n");
// }
//     return 0;
// }

//C

int isSu(long long k)
{
    long long i;
    for ( i = 2; i*i <= k; i++) if (k%i==0) break;
    if (i*i>k) return 1;
    else return 0;
}

long long f(long long x){
    for (long long i = x+1;; i++)
    {
        if (isSu(i)==1)
        {
            return i;
        }
    }
}

int g(long long x) {
    return (long long)(f(x)+f(f(x)))/2;
}

long long num[100000];int key[100000];

int main()
{
    int n=2;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&num[i]);
        key[i]=isSu(g(num[i]));
    }
    for (int i = 0; i < n; i++)
    {
        if (key[i]==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

//A
// int isSu(int k)
// {
//     int i;
//     for ( i = 2; i*i <= k; i++) if (k%i==0) break;
//     if (i*i>k) return 1;
//     else return 0;
// }

// int zhunZHi(int r){
//     for (int i = 2; i*i < r; i++)
//         if (r%i==0 && isSu(i)==1 && isSu(r/i)==1) return 1;
//     return 0;
// }

// int heJie(int a,int b,int c,int d){
//     int sa=zhunZHi(a),sb=zhunZHi(b),sc=zhunZHi(c),sd=zhunZHi(d);
//     if (sa+sb+sc+sd>=3) return 1;
//     else return 0;
// }

// int num[1010]={1,100,53};

// int main()
// {
//     int n=3;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&num[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 2; j < num[i]; j++)
//             for (int k = i+1; k < num[i]; k++)
//                 for (int l = k+1; l < num[i]; l++)
//                     for (int m = l+1; m < num[i]; m++)
//                     {
//                         if (heJie(j,k,l,m)==1 && j+k+l+m==num[i]) {printf("Yes\n%d %d %d %d\n",j,k,l,m);goto loop;}
//                     }
//         printf("NO\n");
//         loop:;
//     }
//     return 0;
// }

//B
// int qushu(int x){
//     if (x==1) return 
// }


// int num[1010];
// int main()
// {
//     int T;
//     scanf("%d",&T);
//     for (int i = 0; i < T; i++)
//     {
//         int n,x,sum;
//         scanf("%d%d",&n,&x);
//         for (int j = 0; j < n; j++)
//             scanf("%d",&num[j]);
        
//     }
    
//     return 0;
// }
