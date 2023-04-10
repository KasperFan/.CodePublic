package WfuOJ;

import java.io.*;
import java.util.Arrays;

/**
 * Created with IntelliJ IDEA.
 *
 * @name: D
 * @author： KasperFan
 * @date： 2023/4/1
 * @description： This file is created for learning Java coding
 * @modifiedBy：
 * @version: 1.0
 */

public class D {
    static StreamTokenizer st = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
    static PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));


    public static void main(String[] args) throws Exception {
        StringBuilder sb = new StringBuilder();
        st.nextToken();
        int N = (int) st.nval;
        int[] A = new int[N], com = new int[N];
        for (int i = 0; i < N; i++) {
            st.nextToken();
            A[i] = (int) st.nval;
            com[i] = A[i];
        }
        Arrays.sort(com);
        int mix = N / 2, left = mix - 1, right = mix + 1, cnt;
        while (com[left] == com[mix]) left--;
        while (com[right] == com[mix]) right++;
        if (N - right > left + 1) mix = right;
        for (int i = 0; i < N; i++) {
            if (i == N - 1) {
                if (A[i] != com[mix]) sb.append(Math.max(0, com[mix] - A[i]));
                else sb.append(0);
            } else {
                if (A[i] != com[mix]) sb.append(Math.max(0, com[mix] - A[i])).append(" ");
                else sb.append(0).append(" ");
            }
        }
        pw.println(sb);
        pw.flush();
    }
}
