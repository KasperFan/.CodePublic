/*
Name    :   P1059明明的随机数.java
Time    :   2023/01/29 19:29:16
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

import java.util.Arrays;
import java.util.Scanner;

public class P1059明明的随机数 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), ans = 0;
        StringBuilder stringBuilder = new StringBuilder();
        int[] num = new int[n];
        for (int i = 0; i < num.length; i++) {
            num[i] = input.nextInt();
        }
        Arrays.sort(num);
        for (int i = 0; i < num.length; i++) {
            if (i > 0 && num[i] == num[i - 1]) {
                continue;
            }
            stringBuilder.append(num[i]).append(" ");
            ans++;
        }
        input.close();
        System.out.println(ans+"\n"+stringBuilder);
    }
}
