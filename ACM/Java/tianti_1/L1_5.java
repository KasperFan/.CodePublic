/*
Name    :   L1_5.java
Time    :   2023/03/04 14:29:40
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package tianti_1;

import java.util.Scanner;

public class L1_5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] emo = new int[24];
        int ask;
        for (int i = 0; i < emo.length; i++) {
            emo[i] = sc.nextInt();
        }
        ask = sc.nextInt();
        while (ask >= 0 && ask <= 23) {
            if (emo[ask] > 50) {
                System.out.println(emo[ask] + " Yes");
            } else {
                System.out.println(emo[ask] + " No");
            }
            ask = sc.nextInt();
        }
        sc.close();
    }
}
