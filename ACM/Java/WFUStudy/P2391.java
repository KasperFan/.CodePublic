/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-04 16:46:33
 * @LastEditTime: 2023-04-05 09:15:20
 * @FilePath: /Java/WFUStudy/P2391.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */

import java.util.Arrays;
import java.util.Scanner;

public class P2391 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int sum = 0, t = 0, ans = 0;
        int[] s = new int[4], length = new int[20];
        for (int i = 0; i < s.length; i++) {
            s[i] = input.nextInt();
        }
        for (int i = 0; i < s.length; i++) {
            sum = t = 0;
            for (int j = 0; j < s[i]; j++) {
                length[j] = input.nextInt();
                sum += length[j];
            }
            Arrays.sort(length);
            for (int j = 0; j < s[i]; j++) {
                for (int j2 = 0; j2 < length.length; j2++) {
                    if (t + length[j2] > sum / 2) {
                        break;
                    }
                    t += length[j2];
                }
            }
            ans += (sum - t);
        }
        input.close();
        System.out.println(ans);
    }
}