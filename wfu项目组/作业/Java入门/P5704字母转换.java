/*
Name    :   P5704【深基2.例6】字母转换.java
Time    :   2022/11/19 00:50:24
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.util.Scanner;

public class P5704字母转换 {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        char ch = scanf.next().charAt(0);
        scanf.close();
        System.out.println((char)((int)ch-32));
    }
}
