/*
Name    :   P1601.java
Time    :   2022/11/23 20:22:29
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.math.BigInteger;
import java.util.Scanner;

public class P1601 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger a = sc.nextBigInteger();
        BigInteger b = sc.nextBigInteger();
        sc.close();
        a=a.add(b);
        System.out.println(a);
    }
}
