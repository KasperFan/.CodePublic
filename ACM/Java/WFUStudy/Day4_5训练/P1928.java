/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 09:08:32
 * @LastEditTime: 2023-04-05 10:13:57
 * @FilePath: /Java/WFUStudy/Day4_5训练/P1928.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */

package Day4_5训练;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StreamTokenizer;
import java.util.LinkedList;

public class P1928 {
    static PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static Read sc = new Read();
    static LinkedList<Character> string = new LinkedList<Character>();

    public static void main(String[] args) throws Exception {
        char[] key = sc.nextLine().toString().toCharArray();
        for (char c : key) {
            string.add(c);
        }
        String ans = unrar();
        pw.println(ans);
        pw.flush();
    }

    public static String unrar() throws Exception {
        int k;
        char ch;
        StringBuilder s = new StringBuilder(), str = new StringBuilder();
        while (!string.isEmpty()) {
            ch = string.pop();
            if (ch == '[') {
                k = (int) (string.pop() - '0');
                str.append(unrar());
                while (k-- > 0) {
                    s.append(str);
                }
            } else if (ch == ']') {
                return s.toString();
            } else {
                s.append(ch);
            }
        }
        return s.toString();
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