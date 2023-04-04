import java.util.Scanner;

public class P1426 {
    static Scanner sc = new Scanner(System.in);
    static double s, x, now, left, right,meter=7;
    public static void main(String[] args) {
        s = sc.nextDouble();
        x = sc.nextDouble();
        left = s - x;
        right = s + x;
        while (true) {
            if (now > right) {
                System.out.println('n');
                break;
            } 
            else if (left <= now && now <= right) {
                if (now + meter > right) {
                    System.out.println('n');
                    break;
                } else {
                    System.out.println('y');
                    break;
                }
            }
            now += meter;
            meter *= 0.98;
        }
    }
}
