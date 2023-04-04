/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-04 15:21:34
 * @LastEditTime: 2023-03-17 01:11:01
 * @FilePath: /ACM/Java/tianti_1/L1_7.java
 * @Description: This file is created for learning Code.
 * 
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */

package tianti_1;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;

public class L1_7 {
    public static void main(String[] args) throws Exception {
        Read r = new Read();

        int N = r.nextInt(), p, min = (int) 1e6, ansm = 0, max = 0, ansx = 0;
        for (int i = 0; i < N; i++) {
            p = r.nextInt();
            if (min > p) { min = p; ansm = 1;}
            else if (min == p) ansm++;

            if (max < p) { max = p; ansx = 1;}
            else if (max == p) ansx++;
        }
        System.out.println(min + " " + ansm);
        System.out.println(max + " " + ansx);
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
