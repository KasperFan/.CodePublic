/*
Name    :   P5711【深基3.例3】闰年判断.java
Time    :   2022/11/19 01:28:59
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.util.Scanner;

public class P5711闰年判断 {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        int year = scanf.nextInt();
        scanf.close();
        System.out.println((year%100!=0 && year%4==0) || (year%100==0 && year%400==0)?1:0);
    }
}
