import java.util.Scanner;

public class C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            long chiken = sc.nextLong();
            if (isPrime(chiken)) {
                System.out.println("YES");
            } else
                System.out.println("NO");
        }
        sc.close();
    }

    public static boolean isPrime(long k) {
        long sk = (long) Math.sqrt(k);
        if (sk * sk != k || k == 1) {
            return false;
        }
        for (int j = 2; j <= sk; j++) {
            if (k % j == 0) {
                return false;
            }
        }
        return true;
    }
}
