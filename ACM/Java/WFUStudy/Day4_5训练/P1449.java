/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 11:30:11
 * @LastEditTime: 2023-04-05 11:32:26
 * @FilePath: /Java/WFUStudy/Day4_5训练/P1449.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练;

import java.util.ArrayDeque;
import java.util.Deque;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;

public class P1449 {
    static Deque<Integer> stack = new ArrayDeque<Integer>();
    static Read sc = new Read();
    
    public static void main(String[] args) throws Exception {
        char[] data = 
        
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
