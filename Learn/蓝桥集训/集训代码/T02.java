package 蓝桥集训.集训代码;

public class T02 {
    public static void main(String[] args) {
        String s = "RLRLRRLLRL";
        System.out.println(func(s));
    }

    public static int func(String s) {
        int ans = 0, d = 0;
        StringBuilder stringBuilder = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == 'L') {
                d++;
            } else {
                d--;
            }
            stringBuilder.append(ch);
            if (d == 0) {
                ans++;
                System.out.println(stringBuilder);
                stringBuilder.delete(0, stringBuilder.length());
            }
        }
        return ans;
    }
}
