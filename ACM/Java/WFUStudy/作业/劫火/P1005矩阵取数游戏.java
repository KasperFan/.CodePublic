/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-04 16:46:33
 * @LastEditTime: 2023-04-05 09:13:38
 * @FilePath: /Java/WFUStudy/作业/劫火/P1005矩阵取数游戏.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package 作业.劫火;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;
import java.math.BigInteger;

public class P1005矩阵取数游戏 {
    static int[][] map = new int[90][90];
    static BigInteger[][] dp = new BigInteger[90][90];

    public static void main(String[] args) throws Exception {
        Read sc = new Read();
        int n = sc.nextInt(), m = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                map[i][j] = sc.nextInt();
            }
        }
        for (int i = 0; i < args.length; i++) {

        }
    }

    /**
     * Read
     */
    static class Read {
        StreamTokenizer st = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));

        public int nextInt() throws Exception {
            st.nextToken();
            return (int) st.nval;
        }
    }
}