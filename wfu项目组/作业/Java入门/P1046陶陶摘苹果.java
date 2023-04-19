/*
Name    :   P1046 [NOIP2005 普及组] 陶陶摘苹果.java
Time    :   2022/11/19 00:43:27
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package 作业.Java入门;

import java.util.Scanner;;

public class P1046陶陶摘苹果 {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        
        int[] lenth = new int[10];
        int high,cnt=0;
        for (int i = 0; i < lenth.length; i++) {
            lenth[i] = scanf.nextInt();
        }
        high = scanf.nextInt();
        scanf.close();
        high = high + 30;
        for (int i = 0; i < lenth.length; i++) if (lenth[i]<=high) cnt++;
        System.out.println(cnt);
    }
}
