/*
Name    :   P1223.java
Time    :   2023/01/09 11:18:41
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/


package 作业.div1;

import java.util.Arrays;
import java.util.Scanner;

public class P1223 {
    /**
     * getWater
     */
    static class getWater implements Comparable<getWater> {
        int turn,timeInNeed;
        double timeInWait;
        
        public getWater(int turn, int timeInNeed) {
            this.turn = turn;
            this.timeInNeed = timeInNeed;
        }
        
        @Override
        public int compareTo(getWater member) {
            if (member.timeInNeed<=this.timeInNeed) {
                return 1;
            }else
                return -1;
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        double ans = 0;
        getWater[] mans = new getWater[n];
        for (int i = 0; i < n; i++) 
            mans[i] = new getWater(i + 1, input.nextInt());
        Arrays.sort(mans);
        for (int i = 1; i < n; i++) {
            mans[i].timeInWait = mans[i - 1].timeInWait + mans[i - 1].timeInNeed;
        }
        for (int i = 0; i < n; i++) {
            System.out.print(mans[i].turn + " ");
            ans += mans[i].timeInWait;
        }
        ans /= n;
        input.close();
        System.out.println();
        System.out.printf("%.2f\n", ans);
    }
}
