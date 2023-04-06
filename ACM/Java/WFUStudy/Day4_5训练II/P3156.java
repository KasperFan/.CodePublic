/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 14:17:29
 * @LastEditTime: 2023-04-05 14:24:32
 * @FilePath: /Java/WFUStudy/Day4_5训练II/P3156.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练II;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StreamTokenizer;

public class P3156 {
    static Read sc = new Read();
    static StringBuilder ans = new StringBuilder();
    static int[] id = new int[2*(int)1e6+10];
    static PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    
    public static void main(String[] args) throws Exception {
        int n = sc.nextInt(), m = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            id[i] = sc.nextInt();
        }
        for (int i = 0; i < m; i++) {
            int j = sc.nextInt();
            ans.append(id[j] + "\n");
        }
        pw.print(ans);
        pw.flush();
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
    }
}

