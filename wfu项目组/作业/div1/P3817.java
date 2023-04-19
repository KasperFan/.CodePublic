/*
Name    :   P3817.java
Time    :   2023/01/09 11:46:32
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.div1;

import java.math.BigInteger;
import java.util.Scanner;

public class P3817 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), x = input.nextInt();
        BigInteger ans = BigInteger.valueOf(0);
        int[] boxs = new int[n];
        for (int i = 0; i < n; i++) {
            boxs[i] = input.nextInt();
        }
        for (int i = 0; i < n - 1; i++) {
            if (boxs[i] + boxs[i + 1] > x) {
                // if (boxs[i] > x) {
                //     ans = ans.add(BigInteger.valueOf(boxs[i] - x));
                //     boxs[i] = x;
                // } else {
                //     int k = boxs[i] + boxs[i + 1] - x;
                //     boxs[i + 1] -= k;
                //     ans = ans.add(BigInteger.valueOf(k));
                // }
                ans = ans.add(BigInteger.valueOf(boxs[i + 1] - x + boxs[i]));
                boxs[i + 1] = x - boxs[i];
            }
        }
        input.close();
        System.out.println(ans);
    }
}
