/*
Name    :   P5716【深基3.例9】月份天数.java
Time    :   2022/11/19 01:40:25
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.util.Scanner;

public class P5716月份天数 {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        int year = scanf.nextInt();
        int month = scanf.nextInt();
        scanf.close();
        switch (month) {
        case 2:
            System.out.println((year%100!=0 && year%4==0) || (year%100==0 && year%400==0)?29:28);
            break;
        case 1:
            System.out.println(31);
            break;
        case 3:
            System.out.println(31);
            break;
        case 5:
            System.out.println(31);
            break;
        case 7:
            System.out.println(31);
            break;
        case 8:
            System.out.println(31);
            break;
        case 10:
            System.out.println(31);
            break;
        case 12:
            System.out.println(31);
            break;
        
        case 4:
            System.out.println(30);
            break;
        case 6:
            System.out.println(30);
            break;
        case 9:
            System.out.println(30);
            break;
        case 11:
            System.out.println(30);
            break;
        default:
            break;
        }
    }
}
