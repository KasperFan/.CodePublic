/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2022-12-05 16:23:06
 * @LastEditTime: 2023-03-17 01:12:48
 * @FilePath: /ACM/Java/P3392.java
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */


import java.util.Scanner;

public class P3392 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ans = 0, min;
        int n = sc.nextInt();
        int m = sc.nextInt();
        min = n * m;
        char[][] flag = new char[n][m];
        for (int i = 0; i < n; i++) {
            flag[i] = sc.next().toCharArray();
        }
        sc.close();
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                ans = 0;
                for (int p = 0; p <= i; p++) {
                    for (int q = 0; q < m; q++) {
                        if (flag[p][q] != 'W')
                            ans++;
                    }
                }
                for (int p = i + 1; p <= j; p++) {
                    for (int q = 0; q < m; q++) {
                        if (flag[p][q] != 'B')
                            ans++;
                    }
                }
                for (int p = j + 1; p < n; p++) {
                    for (int q = 0; q < m; q++) {
                        if (flag[p][q] != 'R')
                            ans++;
                    }
                }
                min = min > ans ? ans : min;
            }
        }
        System.out.println(min);
    }
}
