/*
Name    :   P1255.java
Time    :   2023/01/28 15:26:37
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.math.BigInteger;
import java.util.Scanner;

public class P1255数楼梯 {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        if (N <= 0) {
            System.out.println(0);
        } else if (N == 1) {
            System.out.println(1);
        } else if (N == 2) {
            System.out.println(2);
        } else {
            BigInteger[] step = new BigInteger[N + 1];
            step[0] = BigInteger.valueOf(0);
            step[1] = BigInteger.valueOf(1);
            step[2] = BigInteger.valueOf(2);
            for (int i = 3; i <= N; i++) {
                step[i] = step[i - 1].add(step[i - 2]);
            }
            System.out.println(step[N]);
        }
        input.close();
    }
}
