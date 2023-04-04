/*
Name    :   P1781宇宙总统.java
Time    :   2023/01/29 19:12:44
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

import java.math.BigInteger;
import java.util.Scanner;

public class P1781宇宙总统 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), ans = 0;
        BigInteger max = BigInteger.valueOf(0),num;
        for (int i = 1; i <= n; i++) {
            num = input.nextBigInteger();
            if (max.compareTo(num) < 0) {
                ans = i;
                max = num;
            }
        }
        input.close();
        System.out.println(ans+"\n"+max);
    }
}
