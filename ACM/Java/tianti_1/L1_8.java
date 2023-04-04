/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-04 15:47:43
 * @LastEditTime: 2023-03-17 01:11:07
 * @FilePath: /ACM/Java/tianti_1/L1_8.java
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
/*
Name    :   L1_8.java
Time    :   2023/03/04 16:18:06
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package tianti_1;

import java.util.Scanner;

public class L1_8 {
    static int[] array = new int[10000];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        array[0] = sc.nextInt();
        array[1] = sc.nextInt();
        int n = sc.nextInt(), k = 2, num;
        sc.close();
        for (int i = 0; i < n; i++) {
            num = array[i] * array[i + 1];
            if (num <= 9) {
                array[k++] = num;
            } else {
                array[k] = num / 10;
                array[k + 1] = num % 10;
                k += 2;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                sb.append(array[i]);
            } else {
                sb.append(array[i] + " ");
            }

        }
        System.out.print(sb);
    }
}
