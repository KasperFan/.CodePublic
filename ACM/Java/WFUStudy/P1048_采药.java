/*
Name    :   P1048_采药.java
Time    :   2023/02/14 12:34:31
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/



import java.util.Scanner;

public class P1048_采药 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(), M = sc.nextInt();
        int[] dp = new int[T + 1];
        int[] Time = new int[M + 1];
        int[] Value = new int[M + 1];
        for (int i = 1; i <= M; i++) {
            Time[i] = sc.nextInt();
            Value[i] = sc.nextInt();
        }
        for (int i = 1; i <= M; i++) {
            for (int j = T; j > 0; j--) {
                if (j >= Time[i]) {
                    dp[j] = Math.max(dp[j], dp[j - Time[i]] + Value[i]);
                }
            }
        }
        sc.close();
        System.out.println(dp[T]);
    }
}
