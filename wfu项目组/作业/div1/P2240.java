/*
Name    :   P2240.java
Time    :   2023/01/09 11:10:08
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.div1;

import java.util.Arrays;
import java.util.Scanner;

public class P2240 {
    static class Gold implements Comparable<Gold> {
        int weight, value;
        double perValue;

        public Gold(int weight, int value) {
            this.weight = weight;
            this.value = value;
            this.perValue = this.value * 1.0 / this.weight;
        }

        //改写排序规则
        @Override
        public int compareTo(Gold member) {
            if (member.perValue > this.perValue) {
                return 1;
            } else
                return -1;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), t = sc.nextInt();
        double ans = 0;
        Gold[] golds = new Gold[n];
        for (int i = 0; i < n; i++) 
            golds[i] = new Gold(sc.nextInt(), sc.nextInt());
        Arrays.sort(golds);
        for (int i = 0; i < n; i++) {
            if (t > golds[i].weight) {
                t -= golds[i].weight;
                ans += golds[i].value;
            } else {
                ans += golds[i].perValue * t;
                break;
            }
        }
        sc.close();
        System.out.printf("%.2f\n", ans);
    }
}
