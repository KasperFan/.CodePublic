
/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2022-12-08 16:27:48
 * @LastEditTime: 2023-03-17 01:15:55
 * @FilePath: /.code/ACM/Java/12_8月赛/D.java
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */

import java.util.Arrays;
import java.util.Scanner;

public class D {
    static int k, n, m, cnt = 0;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        k = sc.nextInt();
        n = sc.nextInt();
        m = sc.nextInt();
        int[] num = new int[k];
        int[][] square = new int[n][m];
        StringBuilder[] str = new StringBuilder[n];
        
        for (int i = 0; i < k; i++) {
            num[i] = sc.nextInt();
        }
        sc.close();
        Arrays.sort(num);
        // for (int i = 0; i < n; i++) {
        //     while ((cnt+1) % 5 != 0) {
        //         str[i].append(num[cnt] + " ");
        //         cnt++;
        //     }
        // }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                square[i][j] = num[cnt++];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                str[i].append(square[i][j]).append(" ");
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.println(str[i]);
        }
    }
}
