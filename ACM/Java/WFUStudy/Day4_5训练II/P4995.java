/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 16:31:57
 * @LastEditTime: 2023-04-05 17:04:07
 * @FilePath: /Java/WFUStudy/Day4_5训练II/P4995.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练II;

import java.io.*;
import java.math.BigInteger;
import java.util.Arrays;

public class P4995 {
    public static void main(String[] args) throws Exception {
        Read sc = new Read();
        BigInteger ans = BigInteger.ZERO;
        boolean flag = true;

        int n = sc.nextInt();
        long[] h = new long[n + 1];
        boolean[] check = new boolean[n + 1];
        h[0] = 0;
        check[0] = true;
        for (int i = 1; i <= n; i++) {
            h[i] = sc.nextLong();
        }
        Arrays.sort(h);

        int local = 0, l = 1, r = n;
        while (l != r) {
            if (flag) {
                ans = ans.add(BigInteger.valueOf((long) Math.pow(h[r] - h[local], 2)));
                local = r--;
                flag = !flag;
            } else {
                ans = ans.add(BigInteger.valueOf((long) Math.pow(h[l] - h[local], 2)));
                local = l++;
                flag = !flag;
            }
        }
        if (flag) {
            ans = ans.add(BigInteger.valueOf((long) Math.pow(h[r] - h[local], 2)));
            local = r--;
            flag = !flag;
        } else {
            ans = ans.add(BigInteger.valueOf((long) Math.pow(h[l] - h[local], 2)));
            local = l++;
            flag = !flag;
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

        public long nextLong() throws Exception {
            st.nextToken();
            return (long) st.nval;
        }
    }
}
