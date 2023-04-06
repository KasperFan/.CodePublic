/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-04 16:46:33
 * @LastEditTime: 2023-04-05 09:13:46
 * @FilePath: /Java/WFUStudy/作业/劫火/P1080国王游戏.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
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
        BigInteger MAX = BigInteger.ZERO, S = BigInteger.valueOf(a), X;
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
