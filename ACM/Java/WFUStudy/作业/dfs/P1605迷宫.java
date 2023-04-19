/*
Name    :   P1605迷宫.java
Time    :   2023/02/21 22:11:27
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.dfs;

import java.util.Scanner;

public class P1605迷宫 {
    static int N, M, T, // 迷宫长宽和障碍总数
            SX, SY, FX, FY, ans = 0;// 起点坐标和终点坐标
    static Scanner sc = new Scanner(System.in);
    static int[][] map = new int[6][6];
    static boolean[][] isVisited = new boolean[6][6];

    public static void main(String[] args) {
        N = sc.nextInt();
        M = sc.nextInt();
        T = sc.nextInt();
        SX = sc.nextInt();
        SY = sc.nextInt();
        isVisited[SX][SY] = true;
        FX = sc.nextInt();
        FY = sc.nextInt();
        for (int i = 0; i < T; i++) {
            map[sc.nextInt()][sc.nextInt()] = 1;
        }
        sc.close();
        dfs(SX, SY);
        System.out.println(ans);
    }

    public static void dfs(int x, int y) {
        if (x == FX && y == FY) {
            ans++;
            return;
        }
        // 往上走
        if ((x - 1 >= 1 && x - 1 <= N) && !isVisited[x - 1][y] && map[x - 1][y] != 1) {
            isVisited[x - 1][y] = true;
            dfs(x - 1, y);
            isVisited[x - 1][y] = false;
        }
        // 往右走
        if ((y + 1 >= 1 && y + 1 <= M) && !isVisited[x][y + 1] && map[x][y + 1] != 1) {
            isVisited[x][y + 1] = true;
            dfs(x, y + 1);
            isVisited[x][y + 1] = false;
        }
        // 往下走
        if ((x + 1 >= 1 && x + 1 <= N) && !isVisited[x + 1][y] && map[x + 1][y] != 1) {
            isVisited[x + 1][y] = true;
            dfs(x + 1, y);
            isVisited[x + 1][y] = false;
        }
        // 往左走
        if ((y - 1 >= 1 && y - 1 <= M) && !isVisited[x][y - 1] && map[x][y - 1] != 1) {
            isVisited[x][y - 1] = true;
            dfs(x, y - 1);
            isVisited[x][y - 1] = false;
        }
    }
}
