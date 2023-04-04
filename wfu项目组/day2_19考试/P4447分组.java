package day2_19考试;

import java.util.Scanner;

public class P4447分组 {
    static int min;

    public static void main(String[] args) {
        Runtime r = Runtime.getRuntime();
        r.gc();
        long startMem = r.freeMemory();
        Scanner sc = new Scanner(System.in);
        int[] a = new int[(int) 1e9 * 2 + 10];
        long orz = startMem - r.freeMemory();
        System.out.println(orz);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            a[(int) 1e9 + 1 + sc.nextInt()]++;
        }
        sc.close();
        // for (int i = 0; i < a.length; i++) {

        // }
        System.out.println(min);
    }
}
