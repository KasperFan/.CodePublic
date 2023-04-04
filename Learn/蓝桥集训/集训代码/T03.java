package 蓝桥集训.集训代码;

public class T03 {
    public static void main(String[] args) {
        String s1 = "achmacmh";
        String s2 = "macham";
        int n = f(s1, s2);
        System.out.println(n);
    }

    public static int f(String s1,String s2) {
        char[] c1 = s1.toCharArray();
        char[] c2 = s2.toCharArray();
        int[][] a = new int[c1.length + 1][c2.length + 1];
        int max = 0;
        for (int i = 1; i < a.length; i++) {
            for (int j = 1; j < a[i].length; j++) {
                // if (condition) {
                    
                // }
            }
        }
    }
}
