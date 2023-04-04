/*
Name    :   L1_4.java
Time    :   2023/03/04 14:21:25
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package tianti_1;

import java.util.Scanner;

public class L1_4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), M = sc.nextInt();
        // StringBuilder sb = new StringBuilder();
        double P;
        for (int i = 0; i < N; i++) {
            P = sc.nextDouble();
            if (P < M) {
                // sb.append("On Sale! " + P);
                System.out.printf("On Sale! %f\n", P);
            }
        }
        sc.close();
    }
}
