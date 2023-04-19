/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 15:17:46
 * @LastEditTime: 2023-04-05 15:33:54
 * @FilePath: /Java/WFUStudy/Day4_5训练II/P1174.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练II;

import java.util.Arrays;
import java.util.Scanner;

public class P1174 {
    public static class Classmate implements Comparable<Classmate> {

        String name;
        int y, m, d;
        double com;

        public Classmate(String name, int y, int m, int d) {
            this.name = name;
            this.y = y;
            this.m = m;
            this.d = d;
            this.com = this.y * 1.0 + this.m * 1.0 / 12 + this.d * 1.0 / 365;
        }

        @Override
        public int compareTo(Classmate o) {
            // TODO Auto-generated method stub
            if (o.com <= this.com)
                return 1;
            else
                return -1;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder ans = new StringBuilder();
        int n = sc.nextInt();
        Classmate[] classmates = new Classmate[n];
        for (int i = 0; i < n; i++) {
            classmates[i] = new Classmate(sc.next(), sc.nextInt(), sc.nextInt(), sc.nextInt());
        }
        Arrays.sort(classmates);
        for (int i = 0; i < n; i++) {
            ans.append(classmates[i].name+"\n");
        }
        System.out.print(ans);
    }
}
