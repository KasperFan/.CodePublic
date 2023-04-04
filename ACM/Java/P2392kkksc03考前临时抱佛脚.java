import java.util.Arrays;
import java.util.Scanner;

public class P2392kkksc03考前临时抱佛脚 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int ans = 0;
        int[] s = new int[4];
        for (int i = 0; i < s.length; i++) {
            s[i] = input.nextInt();
        }
        int[] a = new int[s[0]];
        int[] b = new int[s[1]];
        int[] c = new int[s[2]];
        int[] d = new int[s[3]];
        for (int i = 0; i < a.length; i++) {
            a[i] = input.nextInt();
        }
        for (int i = 0; i < b.length; i++) {
            b[i] = input.nextInt();
        }
        for (int i = 0; i < c.length; i++) {
            c[i] = input.nextInt();
        }
        for (int i = 0; i < d.length; i++) {
            d[i] = input.nextInt();
        }
        Arrays.sort(a);
        Arrays.sort(b);
        Arrays.sort(c);
        Arrays.sort(d);
        ans += a[0];
        for (int i = 1; i < a.length; i++) {
            a[i] -= a[i - 1];
            ans += a[i];
        }
        ans += b[0];
        for (int i = 1; i < b.length; i++) {
            b[i] -= b[i - 1];
            ans += b[i];
        }
        ans += c[0];
        for (int i = 1; i < c.length; i++) {
            c[i] -= c[i - 1];
            ans += c[i];
        }
        ans += d[0];
        for (int i = 1; i < d.length; i++) {
            d[i] -= d[i - 1];
            ans += d[i];
        }
        input.close();
        System.out.println(ans);
    }
}
