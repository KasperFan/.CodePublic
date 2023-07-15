/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 10:35:30
 * @LastEditTime: 2023-07-15 10:25:51
 * @FilePath: /ACM/Java/WFUStudy/Day4_5训练/P1320.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class P1320 {
    static StringBuilder buffer = new StringBuilder(), ans = new StringBuilder();
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static boolean flag;

    public static void main(String[] args) throws Exception {
        buffer.append(br.readLine());
        int n = buffer.length();
        for (int i = 1; i < n; i++) {
            buffer.append(br.readLine());
        }
        ans.append(n + " ");
        int cnt = 0;
        for (int i = 0; i < buffer.length(); i++) {
            if (buffer.charAt(i) != '0' ) {
                ans.append(cnt + " ");
                cnt = 1;
            } else {
                cnt++;
            }
        }
        ans.append(cnt);
        System.out.println(ans);
    }
}
