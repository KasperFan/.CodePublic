package day2_19考试;
    
import java.util.Scanner;

public class P1044栈 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] dp = new int[30];
        int a = sc.nextInt();
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= a; i++) {
            for (int j = 0; j < i; j++) {
                dp[i] += dp[j] * dp[i - j - 1];
            }
        }
        System.out.println(dp[a]);
        sc.close();
    }
}
