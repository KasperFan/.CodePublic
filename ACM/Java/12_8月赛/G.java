
/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2022-12-08 15:07:25
 * @LastEditTime: 2023-03-17 01:16:26
 * @FilePath: /.code/ACM/Java/12_8月赛/G.java
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
import java.util.Scanner;

public class G {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        int[] x = new int[T];
        int[] y = new int[T];
        for (int i = 0; i < T; i++) {
            x[i] = sc.nextInt();
            y[i] = sc.nextInt();
        }
        sc.close();
        for (int i = 0; i < T; i++) {
            int n = 1;
            while (Math.pow(x[i], n) < y[i])
                n *= 2;
            while (Math.pow(x[i], n) > y[i])
                n--;
            if (Math.pow(x[i], n) == y[i] && n > 0) {
                System.out.println("Yes");
            } else
                System.out.println("No");
        }
    }
}
