/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 20:18:45
 * @LastEditTime: 2023-04-05 20:59:17
 * @FilePath: /Java/WFUStudy/Day4_5训练III/P1094.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练III;

import java.io.*;
import java.util.ArrayList;
import java.util.Collections;

public class P1094 {
    public static void main(String[] args) throws Exception {
        Read sc = new Read();
        ArrayList<Integer> map = new ArrayList<Integer>();
        int w = sc.nextInt();
        int n = sc.nextInt();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            map.add(sc.nextInt());
        }
        Collections.sort(map);
        for (int i = 0; i < map.size(); i++) {
            boolean flag = true;
            for (int j = map.size() - 1; j > i; j--) {
                if (map.get(i) + map.get(j) <= w) {
                    flag = !flag;
                    map.remove(map.get(j));
                    ans++;
                    break;
                }
            }
            if (flag)
                ans++;
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
