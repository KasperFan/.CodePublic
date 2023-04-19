/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-02-18 01:40:59
 * @LastEditTime: 2023-03-06 19:47:52
 * @FilePath: /.code/Test.java
 * @Description: This file is created for learning Code.
 * 
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */

import java.util.Arrays;
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];
        int next[] = new int[n]; // 代表第i组下一个需要的数
        int sum[] = new int[n]; // 代表当前第i个组的人员数
        int flag = 1;
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Arrays.sort(a);
        next[0] = a[0] + 1; // 初始化
        sum[0] = 1;
        for (int i = 1; i < n; i++)// 依次确定i个数所在分组
        {
            int temp = -1;
            for (int j = 0; j < flag; j++) {
                if (next[j] == a[i]) {
                    temp = j;
                }
            }
            if (temp != -1) {
                next[temp]++;
                sum[temp]++;
            } else {
                next[flag] = a[i] + 1;
                sum[flag] = 1;
                flag++;
            }
        }
        int min = 10000;
        for (int i = 0; i < flag; i++) {
            min = Math.min(min, sum[i]);
        }
        sc.close();
        System.out.println(min);
    }
}