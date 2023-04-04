/*
Name    :   Christmas_eve.c
Time    :   2022/12/24 19:23:01
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for solve OJ problem
*/

#include <stdio.h>
/*                         *
                           /\
                          //\\
                         ///\\\
*/                      int main
                       ( int argc, 
                      char *argv[])
                    { for (double y =
                1.5; y > -1.5; y -= 0.1)
             { for (double x = -1.5; x < 1.5;
/*                         /\
                         ///\\\
                        ////\\\\
                       /////\\\\\
*/                     x += 0.05)
                      { double a =
                    x * x + y * y - 1;
                double s = a * a * a - x *
              x * y * y * y; putchar(a * a * a 
         - x * x * y * y * y <= 0.0 ? '@' : ' '); }
                        putchar
                        ('\n');}
                        printf (
                        "祝雯静永"
                        "远快乐! "
                        "不只是圣"
                        "诞节, 天"
                        "天都快乐"
                        );printf(
                        "\n")   ;
                        return 0;}