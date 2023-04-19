/*
Name    :   S1018.java
Time    :   2023/02/16 20:42:49
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/


package OJ.SDUT_OJ;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StreamTokenizer;
import java.math.BigInteger;

public class S1018 {
    public static void main(String[] args) throws Exception {
        long start = System.currentTimeMillis();
        Read r = new Read();
        PrintWriter p = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        int n = r.nextInt();
        BigInteger bigInteger = BigInteger.ZERO;
        bigInteger.add(func1(n));
        long end = System.currentTimeMillis();
        p.println(bigInteger.toString()+" "+(end-start));
    }

    public static BigInteger func1(int n) {
        if (n <= 2) {
            return BigInteger.valueOf(n);
        }
        BigInteger[] ans = new BigInteger[n + 1];
        ans[1] = BigInteger.valueOf(1);
        ans[2] = BigInteger.valueOf(2);
        for (int i = 3; i <= n; i++) {
            ans[i] = ans[i - 1].add(ans[i - 2]);
        }
        return ans[n];
    }
    
    public static BigInteger func2(int n) {
        if (n > 2) {
            return func2(n - 1).add(func2(n - 2));
        }
        else 
            return BigInteger.valueOf(n);
    }
    
    /**
    * Read
    */
    static class Read { 
        StreamTokenizer st = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
        public int nextInt() throws Exception {
            st.nextToken();
            return (int) st.nval;
        }
    }

}


