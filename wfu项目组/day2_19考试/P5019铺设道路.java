package day2_19考试;

import java.util.Scanner;

public class P5019铺设道路 {
    static int n, ans=0;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int[] d = new int[n+1];
        for (int i = 1; i <= n;i++) {
            d[i] = sc.nextInt();
        }
        sc.close();
        for (int i = 2; i <= n; i++) {
            if (d[i] > d[i - 1]) {
                ans += d[i] - d[i - 1];
            }
        }
        System.out.println(ans+d[1]);
    } 

}
