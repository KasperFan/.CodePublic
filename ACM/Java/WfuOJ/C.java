package WfuOJ;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 *
 * @name: C
 * @author： KasperFan
 * @date： 2023/4/1
 * @description： This file is created for learning Java coding
 * @modifiedBy：
 * @version: 1.0
 */

public class C {
    static long[] ans = new long[26];
    static long max = 0;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();
        for (int i = 0; i < str.length(); i++) {
            ans[(int) str.charAt(i) - 'A']++;
        }
        for (int i = 0; i < ans.length; i++) {
            max = Math.max(ans[i], max);
        }
        for (int i = 0; i < ans.length; i++) {
            if (ans[i] == max){
                System.out.print((char)(i+'A'));
            }
        }
    }
}
