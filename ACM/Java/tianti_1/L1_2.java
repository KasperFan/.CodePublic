/*
Name    :   L1_2.java
Time    :   2023/03/04 14:17:19
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package tianti_1;

import java.util.Scanner;

public class L1_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), K = sc.nextInt(), M = sc.nextInt();
        sc.close();
        System.out.println(N - K * M);
    }
}
