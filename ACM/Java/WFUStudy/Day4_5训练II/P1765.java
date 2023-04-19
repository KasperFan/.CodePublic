/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 14:04:19
 * @LastEditTime: 2023-04-05 14:16:25
 * @FilePath: /Java/WFUStudy/Day4_5训练II/P1765.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练II;

import java.util.Scanner;

public class P1765 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] tap = { 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4 };
        String key = sc.nextLine();
        int ans = 0;
        for (int i = 0; i < key.length(); i++) {
            if (key.charAt(i) == ' ')
                ans++;
            else
                ans += tap[(int) (key.charAt(i) - 'a')];
        }
        sc.close();
        System.out.println(ans);
    }
}
