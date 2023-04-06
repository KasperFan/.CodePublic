package Day4_5训练;

import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.Scanner;

public class P1554 {
    // static 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        int[] num = new int[10];
        long m = sc.nextLong(), n = sc.nextLong();
        sc.close();
        for (long i = m; i <= n; i++) {
            long j = i;
            while (j > 0) {
                num[(int) j % 10]++;
                j /= 10;
            }
        }
        for (int i : num) {
            pw.print(i+" ");
            pw.flush();
        }
    }
}
