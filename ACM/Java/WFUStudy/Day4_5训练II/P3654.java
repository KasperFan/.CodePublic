/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 15:38:56
 * @LastEditTime: 2023-04-05 15:52:59
 * @FilePath: /Java/WFUStudy/Day4_5训练II/P3654.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练II;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;


public class P3654 {
    public static void main(String[] args) throws Exception {
        Read sc = new Read();
        int r = sc.nextInt(), c = sc.nextInt(), k = sc.nextInt(), ans = 0;
        int[][] map = new int[r][c];
        for (int i = 0; i < r; i++) {
            char[] temp = sc.nextLine().toCharArray();
            for (int j = 0; j < c; j++) {
                map[i][j] = temp[j];
            }
        }
        sc.close();
        if (k == 1) {
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    if (map[i][j] == '.') {
                        ans++;
                    }
                }
            }
            System.out.println(ans);
            return;
        }
        boolean flag = false;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                for (int p = 0; p < k; p++) {
                    if (i + p >= r) {
                        flag = true;
                        break;
                    } else if (map[i + p][j] != '.') {
                        flag = true;
                    }
                }
                if (flag) {
                    flag = false;
                } else {
                    ans++;
                }
                for (int p = 0; p < k; p++) {
                    if (j + p >= c) {
                        flag = true;
                        break;
                    } else if (map[i][j + p] != '.') {
                        flag = true;
                    }
                }
                if (flag) {
                    flag = false;
                } else {
                    ans++;
                }
            }
        }
        System.out.println(ans);
    }
    
    /**
    * Read
    */
    static class Read { 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StreamTokenizer st = new StreamTokenizer(br);
        public String nextLine() throws Exception {
            return br.readLine();
        }
        public int nextInt() throws Exception {
            st.nextToken();
            return (int) st.nval;
        }

        public double nextDouble() throws Exception {
            st.nextToken();
            return st.nval;
        }

        public void close() throws Exception {
            br.close();
        }
    }
}
