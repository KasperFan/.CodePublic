/*
Name    :   L1_3.java
Time    :   2023/03/04 14:41:25
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

package tianti_1;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;
import java.util.Scanner;

public class L1_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int year = 10 * (str.charAt(0)-'0')+(str.charAt(1)-'0');
        sc.close();
        StringBuilder sb = new StringBuilder();
        switch (str.length()) {
            case 4:
                if (year<22) {
                    sb.append("20").append(str.substring(0, 2)).append("-").append(str.substring(2, 4));
                } else {
                    sb.append("19").append(str.substring(0, 2)).append("-").append(str.substring(2, 4));
                }
                break;

            default:
                sb.append(str.substring(0, 4)).append("-").append(str.substring(4, 6));
                break;
        }
        System.out.println(sb);
    }
}
/**
* Read
*/
class Read { 
    StreamTokenizer st = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
    public int nextInt() throws Exception {
        st.nextToken();
        return (int) st.nval;
    }
}