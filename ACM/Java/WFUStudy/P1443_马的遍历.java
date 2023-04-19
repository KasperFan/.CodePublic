/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-04 16:46:33
 * @LastEditTime: 2023-04-05 09:15:04
 * @FilePath: /Java/WFUStudy/P1443_马的遍历.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */

import java.util.LinkedList;
import java.util.Scanner;

public class P1443_马的遍历 {
    static int n, m, x, y;
    static int[][] ans = new int[410][410];
    static boolean[][] rec = new boolean[410][410];
    static int[] dx = { -1, -2, 1, 2, -1, -2, 2, 1 }, dy = { -2, -1, 2, 1, 2, 1, -1, -2 };

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                ans[i][j] = -1;
        n = sc.nextInt();
        m = sc.nextInt();
        x = sc.nextInt();
        y = sc.nextInt();
        sc.close();
        LinkedList<node> queue = new LinkedList<node>();
        queue.add(new node(x, y, 0));
        ans[x][y] = 0;
        rec[x][y] = true;
        bfs(queue);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                System.out.printf("%-5d", ans[i][j]);
            System.out.println();
        }
    }

    public static void bfs(LinkedList<node> queue) {
        while (!queue.isEmpty()) {
            node temp = queue.pop();
            for (int i = 0; i < 8; i++) {
                int nx = temp.x + dx[i];
                int ny = temp.y + dy[i];
                if ((nx < 1 || nx > n) || (ny < 1 || ny > m) || rec[nx][ny] == true) {
                    continue;
                }
                queue.add(new node(nx, ny, temp.ans + 1));
                ans[nx][ny] = temp.ans + 1;
                rec[nx][ny] = true;
            }
        }
    }

    static class node {
        int x, y, ans = -1;

        public node(int x, int y, int ans) {
            this.x = x;
            this.y = y;
            this.ans = ans;
        }
    }
}
// f[i][j] = max(f[i-1][j], f[i-1][j - v[i]]+w[i], f[i-1][j-2*v[i]]+2*w[i],
// f[i-1][j-3*v[i]]+3*w[i] ,......)
// f[i][j-v[i]]=max(f[i-1][j-v[i]],f[i-1][j-2*v[i]]+w[i],f[i-1][j-3*v[i]]+2*w[i],f[i-1][j-3*v[i]]+3*w[i],......)
