/*
Name    :   P5715【深基3.例8】三位数排序.java
Time    :   2022/11/19 01:50:20
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.util.Arrays;
import java.util.Scanner;

public class P5715三位数排序 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] num = new int[3];
        for (int i = 0; i < num.length; i++) {
            num[i] = input.nextInt();
        }
        Arrays.sort(num);
        input.close();
        System.out.println(num[0] + " " + num[1] + " " + num[2]);
    }
}
