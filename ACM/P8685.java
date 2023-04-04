/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-28 11:46:04
 * @LastEditTime: 2023-03-29 20:20:34
 * @FilePath: /ACM/P8685.java
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;

public class P8685 {
    static int n, m, t, ts, id, tt, ans;
    static int[] wmds = new int[10010], tss = new int[10010], ids = new int[10010];
    // static LinkedList<Integer> tss = new LinkedList<Integer>();
    // static LinkedList<Integer> ids = new LinkedList<Integer>();

    public static void main(String[] args) throws Exception {
        Read sc = new Read();
        n = sc.nextInt();
        m = sc.nextInt();
        t = sc.nextInt();
        for (int i = 0; i < m; i++) {
            ts = sc.nextInt();
            id = sc.nextInt();
            if (ts <= t) {
                if (check(ts, id))
                    wmds[id] += 3;
                else
                    wmds[id] += 2;
            }
        }
        for (int i = 1; i <= wmds.length; i++) {
            wmds[i] -= t;
            if (wmds[i] > 5) {
                ans++;
            }
        }
        System.out.println(ans);
    }

    public static boolean check(int ts, int id) {
        for (int i = 0; i < tt; i++) {
            if (tss[i] == ts && ids[i] == id) {
                return false;
            }
        }
        tss[tt++] = ts;
        ids[tt++] = id;
        return true;
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
