

import java.util.Scanner;

public class P1914_小书童凯撒密码 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        char[] ch = sc.next().toCharArray();
        StringBuilder stringBuilder = new StringBuilder();
        
        n %= 26;
        for (int i = 0; i < ch.length; i++) {
            ch[i] += n;
            if (ch[i] > 'z') {
                ch[i] -= 26;
            }
            stringBuilder.append(ch[i]);
        }
        sc.close();
        System.out.println(stringBuilder);
    }
}
