/*
Name    :   P1706全排列问题.java
Time    :   2023/02/21 21:04:58
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.dfs;

import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.Scanner;

public class P1706全排列问题 {
    static int n;
    static boolean[] isVisited = new boolean[10];
    static int[] box = new int[10];
    static StringBuilder sb = new StringBuilder();
    static PrintWriter p = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        n = sc.nextInt();
        dfs(0);
        sc.close();
        p.print(sb);
        p.flush();
    }
    
    public static void dfs(int step) {
        if (step==n) {
            for (int i = 1; i <= n; i++) {
                sb.append("    ").append(box[i]);
            }
            sb.append("\n");
            return ;
        }
        for (int i = 1; i <= n; i++) {
            if (!isVisited[i]) {
                box[step + 1] = i;
                isVisited[i] = true;
                dfs(step + 1);
                isVisited[i] = false;
            }
        }
    }
}
