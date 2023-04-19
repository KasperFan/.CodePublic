/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 17:10:35
 * @LastEditTime: 2023-04-05 17:10:37
 * @FilePath: /Java/WFUStudy/Day4_5训练II/P2392.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练II;

import java.io.*;
import java.util.*;

public class P2392 {
    static int[] num;

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        int[][] times = new int[4][];
        for (int i = 0; i < 4; i++) {
            int n = sc.nextInt();
            times[i] = new int[n];
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < times[i].length; j++) {
                times[i][j] = sc.nextInt();
            }
        }
        int res = 0;
        int sum;
        for (int i = 0; i < 4; i++) {
            sum = Arrays.stream(times[i]).sum();
            int sum1 = sum;
            sum = sum >> 1;
            int[] dp = new int[sum + 1];
            for (int j = 0; j < times[i].length; j++) {
                for (int k = sum; k >= times[i][j]; k--) {
                    dp[k] = Math.max(dp[k], dp[k - times[i][j]] + times[i][j]);
                }
            }
            res += (sum1 - dp[sum]);
        }
        pr.println(res);
        pr.flush();
        return;
    }
}
