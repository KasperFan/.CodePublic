#include <stdio.h>
#include <math.h>
#define PI 3.141593

int main(int argc, char const *argv[])
{
    int Q;
    scanf("%d",&Q);
    switch (Q)
    {
    case 1:
        printf("I love Luogu!\n");
        break;
    
    case 2:
        printf("%d %d\n",2+4,10-(2+4));
        break;
    
    case 3:
        printf("%d\n%d\n%d\n",14/4,14-(14%4),14%4);
        break;
    
    case 4:
        printf("%.3lf\n",500/3.0);
        break;
    
    case 5:
        printf("%d\n",(260+220)/32);
        break;
    
    case 6:
        printf("%lf\n",sqrt(pow(6,2)+pow(9,2)));
        break;
    
    case 7:
        printf("%d\n%d\n%d\n",100+10,100+10-20,0);
        break;
    
    case 8:
        printf("%lf\n%lf\n%lf\n",2*PI*5,PI*pow(5,2),PI*pow(5,3)*3/4.0);
        break;
    
    case 9:
        printf("%d\n",22);
        break;
    
    case 10:
        printf("%d\n",9);
        break;
    
    case 11:
        printf("%lf\n",100/3.0);
        break;
    
    case 12:
        printf("%d\n",'M'-'A'+1);
        printf("%c\n",'A'+17);
        break;
    
    case 13:
        printf("%d\n",(int)pow(PI*pow(4,3)*3/4.0+PI*pow(10,3)*3/4.0,1/3.0));
        break;
    
    case 14:
        printf("%d\n",50);
        break;
    }
    return 0;
}
