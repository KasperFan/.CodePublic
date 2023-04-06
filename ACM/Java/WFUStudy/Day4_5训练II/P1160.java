/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 16:04:22
 * @LastEditTime: 2023-04-05 16:27:38
 * @FilePath: /Java/WFUStudy/Day4_5训练II/P1160.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练II;

import java.util.LinkedList;
import java.io.*;

public class P1160 {
    public static void main(String[] args) throws Exception {
        Read sc = new Read();
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        
        LinkedList<Integer> list = new LinkedList<Integer>();
        StringBuilder ans = new StringBuilder();

        int n = sc.nextInt();
        list.add(1);
        for (int i = 2; i <= n; i++) {
            int k = sc.nextInt(), p = sc.nextInt();
            if (p == 0) {
                int index = list.indexOf(k);
                if (index != -1) {
                    list.add(index, i);
                }
            } else {
                int index = list.indexOf(k);
                if (index != -1) {
                    list.add(index + 1, i);
                }
            }
        }

        int m = sc.nextInt();
        for (int i = 0; i < m; i++) {
            int x = sc.nextInt();
            if (list.contains(new Integer(x))) {
                list.remove(new Integer(x));
            }
        }
        for (int i : list) {
            ans.append(i + " ");
        }
        pw.println(ans);
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
