/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-04 15:01:17
 * @LastEditTime: 2023-03-17 01:10:53
 * @FilePath: /ACM/Java/tianti_1/L1_6.java
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
/*
Name    :   L1_6.java
Time    :   2023/03/04 16:43:20
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package tianti_1;

import java.util.Scanner;

public class L1_6 {
    static String key1 = "qiandao", key2 = "easy";

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), M = sc.nextInt(), j = 1;
        String[] line = new String[N + 1];
        for (int i = 0; i < line.length; i++) {
            line[i] = sc.nextLine();
        }
        sc.close();
        while (M > 0) {
            if (j == line.length) {
                break;
            }
            if (line[j].contains(key1) || line[j].contains(key2)) {
                j++;
                continue;
            }
            j++;
            M--;
        }
        if (j == line.length) {
            System.out.print("Wo AK le");
        } else {
            while (line[j].contains(key1) || line[j].contains(key2))
                j++;
            if (j == line.length) {
                System.out.print("Wo AK le");
            } else {
                System.out.print(line[j]);
            }
        }
    }
}
