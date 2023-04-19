/*
Name    :   P1047 [NOIP2005 普及组] 校门外的树.java
Time    :   2022/11/19 01:08:54
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.util.Scanner;

public class P1047校门外的树 {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        int[] tree = new int[10001];
        for (int i = 0; i < tree.length; i++) tree[i] = 1;
        int cnt = 0;
        int l = scanf.nextInt();
        int m = scanf.nextInt();
        for (int i = 0; i < m; i++) {
            int u = scanf.nextInt();
            int v = scanf.nextInt();
            for (int j = u; j <= v; j++) tree[j]=0;
        }
        scanf.close();
        for (int i = 0; i <= l; i++) if (tree[i] == 1) cnt++;
        System.out.println(cnt);
    }
}
