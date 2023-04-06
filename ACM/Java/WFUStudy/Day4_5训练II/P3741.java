/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 14:30:34
 * @LastEditTime: 2023-04-05 15:14:51
 * @FilePath: /Java/WFUStudy/Day4_5训练II/P3741.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练II;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;

public class P3741 {
    public static void main(String[] args) throws Exception {
        Read sc = new Read();
        int n = sc.nextInt();
        String key = sc.nextLine();
        n = key.length();
        // String count = "VK", replace = "";
        int ans = 0;

        key = key.replaceAll("VK", "");
        ans = (n - key.length()) / 2;
        for (int i = 0; i < key.length() - 1; i++) {
            if (key.charAt(i) == key.charAt(i + 1)) {
                ans++;
                break;
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
    }
}