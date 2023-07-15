/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 19:17:52
 * @LastEditTime: 2023-04-05 19:22:46
 * @FilePath: /Java/WFUStudy/Day4_5训练III/P1014.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练III;

import java.util.Scanner;

public class P1014 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), k = 0;
        while (N > k) {
            N -= k++;
        }
        if (k % 2 == 0)
            System.out.println(N + "/" + (k + 1 - N));
        else
            System.out.println((k + 1 - N) + "/" + N);
        sc.close();
    }
}
