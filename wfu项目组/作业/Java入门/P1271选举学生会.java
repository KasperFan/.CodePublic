/*
Name    :   P1271选举学生会.java
Time    :   2023/01/28 16:50:38
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.util.Scanner;

public class P1271选举学生会 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), m = input.nextInt();
        StringBuilder str = new StringBuilder();
        int[] ticket = new int[n + 1];
        for (int i = 0; i < m; i++) {
            ticket[input.nextInt()]++;
        }
        for (int i = 1; i <= n; i++) {
            while (ticket[i]-- > 0) {
                str.append(i).append(" ");
            }
        }
        input.close();
        System.out.println(str);
    }
}






















// import java.util.Scanner;

// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int m = sc.nextInt();
//         int[] bucket = new int[n+1];
//         for (int i = 0; i < m; i++) {
//             bucket[sc.nextInt()]++;
//         }
//         sc.close();
//         StringBuilder string = new StringBuilder();
//         for (int i = 1; i <= n; i++) {
//             while (bucket[i]-- != 0) {
//                 string.append(i + " ");
//             }
//         }
//         System.out.println(string);
//     }
// }
