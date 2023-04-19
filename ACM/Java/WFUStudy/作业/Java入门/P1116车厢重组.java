/*
Name    :   P1116车厢重组.java
Time    :   2023/01/28 16:21:09
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.util.Scanner;

public class P1116车厢重组 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt(), ans = 0;
        int[] num = new int[N];
        for (int i = 0; i < N; i++) {
            num[i] = input.nextInt();
        }
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - 1; j++) {
                if (num[j] > num[j + 1]) {
                    num[j] += num[j + 1];
                    num[j + 1] = num[j] - num[j + 1];
                    num[j] -= num[j + 1];
                    ans++;
                }
            }
        }
        input.close();
        System.out.println(ans);
    }
}
