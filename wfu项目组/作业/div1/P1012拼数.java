/*
Name    :   P1012拼数.java
Time    :   2023/01/29 00:47:08
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.div1;

import java.util.Scanner;
import java.lang.Math;

public class P1012拼数 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] num = new int[n];
        for (int i = 0; i < n; i++) {
            num[i] = sc.nextInt();
        }
        sc.close();
        sortNumber(num);
        for (int i = 0; i < n; i++) {
            System.out.print(num[i]);
        }
    }

    
    public static void sortNumber(int[] num) {
        for (int i = 0; i < num.length; i++) {
            for (int j = 0; j < num.length-i; j++) {
                if (j + 1 >= num.length)
                    continue;
                if (num[j] * (int) Math.pow(10, getNumberLenth(num[j + 1])) + num[j + 1] < 
                    num[j + 1] * (int) Math.pow(10, getNumberLenth(num[j])) + num[j]) {
                    int temp;
                    temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }
    }

    public static int getNumberLenth(int k) {
        if (k >= 100000000) {
            return 9;
        } else if (k >= 10000000) {
            return 8;
        } else if (k >= 1000000) {
            return 7;
        } else if (k >= 100000) {
            return 6;
        } else if (k >= 10000) {
            return 5;
        } else if (k >= 1000) {
            return 4;
        } else if (k >= 100) {
            return 3;
        } else if (k >= 10) {
            return 2;
        } else
            return 1;
    }
}
