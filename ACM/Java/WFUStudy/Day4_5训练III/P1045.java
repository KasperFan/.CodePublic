/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 21:04:09
 * @LastEditTime: 2023-04-06 10:17:02
 * @FilePath: /Java/WFUStudy/Day4_5训练III/P1045.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练III;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.*;

public class P1045 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        StringBuilder out = new StringBuilder();

        long p = sc.nextLong();
        sc.close();
        BigInteger ans = new BigInteger("2").modPow(BigInteger.valueOf(p),BigInteger.valueOf(10).pow(500)).subtract(BigInteger.ONE);
        String str = ans.toString();
        int length = str.length();
        out.append((int) (Math.log10(2)*p)+1 + "\n");
        String last500Chars = str.substring(Math.max(0, length - 500), length);
        if (length < 500) {
            StringBuilder fin = new StringBuilder();
            int cure = 500 - length;
            while (cure-- > 0) {
                fin.append('0');
            }
            last500Chars = fin.toString() + last500Chars;
        }
        for (int i = 0; i < 500; i++) {
            if (i % 50 == 0 && i != 0) {
                out.append("\n");
            }
            out.append(last500Chars.charAt(i));
        }
        pw.println(out);
        pw.flush();
    }
}