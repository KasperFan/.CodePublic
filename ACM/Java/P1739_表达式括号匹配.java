/*
Name    :   P1739_表达式括号匹配.java
Time    :   2023/02/27 20:25:23
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

import java.util.Scanner;

public class P1739_表达式括号匹配 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ans = 0, flag = 0;
        char[] array = sc.nextLine().toCharArray();
        for (int i = 0; i < array.length; i++) {
            if (array[i] == '(') {
                flag = 1;
                ans++;
            } else if (array[i] == ')' && flag > 0) {
                flag--;
                ans--;
            }
        }
        sc.close();
        if (ans == 0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

}
