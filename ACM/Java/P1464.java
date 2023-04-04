import java.util.Scanner;



public class P1464 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a, b, c,ans;
        do {
            a = sc.nextLong();
            b = sc.nextLong();
            c = sc.nextLong();
            //System.out.println(a,b,c);
            ans = w(a, b, c);
            System.out.println("w(" + a + ", " + b + ", " + c + ") = " + ans);
            a = sc.nextLong();
            b = sc.nextLong();
            c = sc.nextLong();
        } while (a != -1 && b != -1 && c != -1);
        sc.close();
    }
    
    public static long w(long a,long b,long c) {
        if (a <= 0 && b <= 0 && c <= 0)
            return 1;
        else if (a > 20 || b > 20 || c > 20)
            return w(20, 20, 20);
        else if (a < b && b > c)
            return w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        else
            return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    }
}
