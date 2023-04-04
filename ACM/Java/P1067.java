import java.util.Scanner;

public class P1067 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] num = new int[n + 1];
        for (int i = n; i >= 0; i--) {
            num[i] = sc.nextInt();
        }
        sc.close();
        for (int i = n; i >= 0; i--) {
            if (n == 0) {
                System.out.printf("%d", num[i]);
            } else if (i == n && i != 0) {
                if (Math.abs(num[i]) >= 2) {
                    if (num[i] > 0)
                        System.out.printf("%dx^%d", num[i], i);
                    else
                        System.out.printf("%dx^%d", num[i], i);
                } else if (Math.abs(num[i]) == 1) {
                    if (num[i] > 0)
                        System.out.printf("x^%d", i);
                    else
                        System.out.printf("-x^%d", i);
                }
            } else if (i > 1) {
                if (Math.abs(num[i]) >= 2) {
                    if (num[i] > 0)
                        System.out.printf("+%dx^%d", num[i], i);
                    else
                        System.out.printf("%dx^%d", num[i], i);
                } else if (Math.abs(num[i]) == 1) {
                    if (num[i] > 0)
                        System.out.printf("+x^%d", i);
                    else
                        System.out.printf("-x^%d", i);
                }
            } else if (i == 1) {
                if (Math.abs(num[i]) >= 2) {
                    if (num[i] > 0)
                        System.out.printf("+%dx", num[i]);
                    else
                        System.out.printf("%dx", num[i]);
                } else if (Math.abs(num[i]) == 1) {
                    if (num[i] > 0)
                        System.out.printf("+x");
                    else
                        System.out.printf("-x");
                }
            } else {
                if (Math.abs(num[i]) >= 2) {
                    if (num[i] > 0)
                        System.out.printf("+%d", num[i]);
                    else
                        System.out.printf("%d", num[i]);
                } else if (Math.abs(num[i]) == 1) {
                    if (num[i] > 0)
                        System.out.printf("+1");
                    else
                        System.out.printf("-1");
                }
            }
        }
    }
}
