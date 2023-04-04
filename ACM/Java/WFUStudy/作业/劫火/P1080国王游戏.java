/*
Name    :   P1080国王游戏.java
Time    :   2023/01/10 17:30:17
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.劫火;

import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

public class P1080国王游戏 {
    static class Minister implements Comparable<Minister> {
        long left, right, check;

        public Minister(long left, long right) {
            this.left = left;
            this.right = right;
            this.check = this.left * this.right;
        }

        @Override
        public int compareTo(Minister o) {
            if (this.check > o.check) {
                return 1;
            } else if (this.check == o.check) {
                return 0;
            } else {
                return -1;
            }
        }
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), a = input.nextInt();
        input.nextInt();
        BigInteger MAX = BigInteger.ZERO, S = BigInteger.valueOf(a),X;
        Minister[] ministers = new Minister[n];
        for (int i = 0; i < n; i++) {
            ministers[i] = new Minister(input.nextInt(), input.nextInt());
        }
        Arrays.sort(ministers);
        for (int i = 0; i < n; i++) {
            X = S.divide(BigInteger.valueOf(ministers[i].right));
            S = S.multiply(BigInteger.valueOf(ministers[i].left));
            if (MAX.compareTo(X) < 0) {
                MAX = X;
            }
        }
        input.close();
        System.out.println(MAX);
    }
}
