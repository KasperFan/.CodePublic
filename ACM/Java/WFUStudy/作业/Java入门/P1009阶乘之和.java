/*
Name    :   P1009阶乘之和.java
Time    :   2022/11/24 12:24:50
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.math.BigInteger;
import java.util.Scanner;

public class P1009阶乘之和 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        BigInteger S = BigInteger.valueOf(0);
        for (int i = 1; i <= n; i++) {
            S=S.add(jie(i));
        }
        System.out.println(S);
    }

    public static BigInteger jie(int k) {
        BigInteger n = BigInteger.valueOf(k);
        if (n.compareTo(BigInteger.valueOf(1))==0) return BigInteger.valueOf(1);
        else return n.multiply(jie(k-1));
    }
}