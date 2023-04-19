/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-08 20:04:56
 * @LastEditTime: 2023-03-17 01:11:19
 * @FilePath: /ACM/Java/tianti_1/test.java
 * @Description: This file is created for learning Code.
 * 
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 * @description: 
 */
package tianti_1;

import java.util.Scanner;

public class test {
    static int[] arr = new int[20010];
    
    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);
        int N = r.nextInt(), min = (int) 1e6, ansm = 0, max = 0, ansx = 0;
        for (int i = 0; i < N; i++) {
            arr[i] = r.nextInt();
        }
        r.close();
        for (int i = 0; i < N; i++) {
            if (min > arr[i]) {
                min = arr[i];
                ansm = 1;
            } else if (min == arr[i]) {
                ansm++;
            }

            if (max < arr[i]) {
                max = arr[i];
                ansx = 1;
            } else if (max == arr[i]) {
                ansx++;
            }
        }
        System.out.println(min + " " + ansm);
        System.out.println(max + " " + ansx);
    }
}
