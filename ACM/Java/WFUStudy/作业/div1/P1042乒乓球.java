/*
Name    :   P1042.java
Time    :   2022/12/18 12:11:20
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.div1;

import java.util.Scanner;

public class P1042乒乓球 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        StringBuilder line = new StringBuilder();

        while (input.hasNext()) {
            String str = input.nextLine();
            line.append(str);
            if (str.contains("E")) {
                break;
            }
        }
        char[] str = line.toString().toCharArray();
        countScore(str, 11);
        System.out.println();
        countScore(str, 21);
        input.close();
    }
    
    public static void countScore(char[] charArray, int score) {
        int sumW = 0, sumL = 0;
        for (int i = 0; charArray[i] != 'E'; i++) {
            if (charArray[i] == 'W') {
                sumW++;
            } else {
                sumL++;
            }
            if ((sumL >= score || sumW >= score) && Math.abs(sumL - sumW) >= 2) {
            System.out.println(sumW + ":" + sumL);
            sumL = sumW = 0;
            }
        }
        System.out.println(sumW + ":" + sumL);
    }
}
