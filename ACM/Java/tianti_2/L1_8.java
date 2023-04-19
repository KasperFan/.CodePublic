/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-12 01:03:58
 * @LastEditTime: 2023-03-17 01:11:28
 * @FilePath: /ACM/Java/tianti_2/L1_8.java
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package tianti_2;

import java.util.Scanner;

public class L1_8 {
    static int[] price = { 10000, 36, 720, 360, 80, 252, 108, 72, 54, 180, 72, 180, 119, 36, 306, 1080, 144, 1800,
            3600 };
    static boolean[] che = new boolean[10];
    

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] num = new int[3][3];
        int ans = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                num[i][j] = sc.nextInt();
                che[num[i][j]] = true;
            }
        }
        sc.close();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (num[i][j]==0) {
                    for (int j2 = 0; j2 < 10; j2++) {
                        if (che[j2] != true) {
                            num[i][j] = j2;
                        }
                    }
                    }
            }
        }
        for (int i = 0; i < 3; i++) {
            System.out.println(num[sc.nextInt() - 1][sc.nextInt() - 1]);
        }
        int con = sc.nextInt();
        switch (con) {
            case 1:
                ans = num[0][0] + num[0][1] + num[0][2];
                break;

            case 2:
                ans = num[1][0] + num[1][1] + num[1][2];
                break;

            case 3:
                ans = num[2][0] + num[2][1] + num[2][2];
                break;

            case 4:
                ans = num[0][0] + num[1][0] + num[2][0];
                break;

            case 5:
                ans = num[0][1] + num[1][1] + num[2][1];
                break;

            case 6:
                ans = num[0][2] + num[1][2] + num[2][2];
                break;

            case 7:
                ans = num[0][0] + num[1][1] + num[2][2];
                break;

            case 8:
                ans = num[0][2] + num[1][1] + num[2][0];
                break;
        }
        System.out.println(price[ans - 6]);
    }
}
