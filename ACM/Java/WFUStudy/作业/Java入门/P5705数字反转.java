/*
Name    :   P5705 【深基2.例7】数字反转.java
Time    :   2022/11/19 00:56:29
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.util.Scanner;

public class P5705数字反转 {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        char[] str = scanf.next().toCharArray();
        scanf.close();
        for (int i = str.length-1; i >= 0; i--) {
            System.out.print(str[i]);
        }
    }
}
