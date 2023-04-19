/*
Name    :   B3664零食售卖点.java
Time    :   2023/01/28 16:03:50
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.util.Arrays;
import java.util.Scanner;

public class B3664零食售卖点 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), ans = 0;
        int[] line = new int[n];
        for (int i = 0; i < n; i++) {
            line[i] = input.nextInt();
        }
        Arrays.sort(line);
        for (int i = 1; i < n; i++) {
            ans = ans > (line[i] - line[i - 1]) ? ans : (line[i] - line[i - 1]);
        }
        System.out.println(ans);
        input.close();
    }
}
