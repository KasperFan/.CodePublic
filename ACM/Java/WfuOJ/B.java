package WfuOJ;

public class B {
    public static void main(String[] args) {
        long low = 2022;
        
        long high = 2022222022;
        int count = 0;
        for (int i = 1; i <= 9; i++) {
            for (int j = 0; j <= 9; j++) {
                for (int k = 1; k <= 10; k++) {
                    String s = "" + i;
                    for (int l = 1; l < k; l++) {
                        s += j;
                    }
                    String t = new StringBuilder(s).reverse().toString();
                    long n1 = Long.parseLong(s + t);
                    if (n1 >= low && n1 <= high) {
                        count++;
                    }
                    for (int l = 0; l <= 9; l++) {
                        long n2 = Long.parseLong(s + l + t);
                        if (n2 >= low && n2 <= high) {
                            count++;
                        }
                    }
                }
            }
        }
        System.out.println(count);
    }
}