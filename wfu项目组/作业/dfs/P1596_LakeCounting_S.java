package 作业.dfs;

import java.util.Scanner;

public class P1596_LakeCounting_S {
    static int N, M, ans = 0, i, j;
    static char[][] map = new char[102][102];
    static int[] dx = { -1, -1, -1, 0, 0, 1, 1, 1 },
            dy = { -1, 0, 1, -1, 1, -1, 0, 1 };
    static boolean[][] isVisited = new boolean[101][101];

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            N = sc.nextInt();
            M = sc.nextInt();
            for (i = 1; i <= N; i++) {
                map[i] = sc.nextLine().toCharArray();
            }
        }
        for (i = 1; i <= N; i++) {
            for (j = 1; i <= M; i++) {
                isVisited[i][j] = true;
                dfs(i, j);
            }
        }
        System.out.println(ans);
    }

    public static void dfs(int x, int y) {
        if (map[x][y] == '.') {
            return;
        } else {
            for (int j2 = 0; j2 < 8; j2++) {
                if ((x + dx[j2] > 0 && x + dx[j2] <= N) && (y + dy[j2] > 0 && y + dy[j2] <= M)
                        && !isVisited[x + dx[j2]][y + dy[j2]] && map[x + dx[j2]][y + dy[j2]] == 'W') {
                    isVisited[x + dx[j2]][y + dy[j2]] = true;
                    dfs(x + dx[j2], y + dy[j2]);
                }
            }
            if (x == i && x == j) {
                ans++;
                return;
            }
        }
    }
}
