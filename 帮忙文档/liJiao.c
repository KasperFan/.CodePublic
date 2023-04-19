// #include <stdio.h>

// int main()
// {
//     char ch,a,b,c,d,e;
//     printf("请选择方式 编码（b）或解码（j）：");
//     ch=getchar();
//     if (ch=='b')
//     {
//         printf("请输入待编码内容：");
//         scanf("%1c%1c%1c%1c%1c",&a,&b,&c,&d,&e);
//         a+=4;
//         b+=4;
//         c+=4;
//         d+=4;
//         e+=4;
//         printf("编码结果为：%c",a);
//         printf("%c%c%c%c\n",b,c,d,e);
//     }
//     if (ch=='j')
//     {
//         printf("请输入待解码内容：");
//         scanf("%1c%1c%1c%1c%1c",&a,&b,&c,&d,&e);
//         a-=4;
//         b-=4;
//         c-=4;
//         d-=4;
//         e-=4;
//         printf("解码结果为：");
//         putchar(a);
//         putchar(b);
//         putchar(c);
//         putchar(d);
//         putchar(e);
//     }
//     return 0;
// }

//圣诞树
// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 2-i; j >= 0; j--) putchar(' ');
//         for (int j = 0; j < i*2-1; j++) putchar('*');
//         putchar('\n');
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 5; j++) putchar('*');
//         printf("\n");
//     }
//     return 0;
// }

//无限计算：
//Plan A：
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int x;
//     for (int i = 0; i < 1; )
//     {
//         scanf("%d",&x);
//         printf("%.0lf\n",pow(sin(x),2)+pow(cos(x),2));
//     }
    
//     return 0;
// }
//Plan B:
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int x;
//     while (scanf("%d",&x) != EOF)
//     {
//         printf("%.0lf\n",pow(sin(x),2)+pow(cos(x),2));
//     }
    
//     return 0;
// }
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int x;
//    while (scanf("%d", &x) != 0)
//    {
//        double sum=sin(x) * sin(x) + cos(x) * cos(x);
//        printf("%.0lf\n",sum);
//    }
//return 0;
//}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0,a,sum=1;
    scanf("%d",&n);
    while (i<n)
    {
        scanf("%d",&a);
        if (a%2) sum*=a;
        i++;
    }
    printf("%d",sum);
    return 0;
}
