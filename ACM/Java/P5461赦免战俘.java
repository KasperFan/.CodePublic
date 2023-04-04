/*
Name    :   P5461赦免战俘.java
Time    :   2023/02/07 00:02:53
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

import java.io.BufferedWriter;
// import java.io.File;
// import java.io.FileWriter;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;

public class P5461赦免战俘 {
    public static void main(String[] args) throws Exception {
        
        // String dir = "./a.txt";
        // File file = new File(dir);
        // if (!file.exists()) {
        //     file.createNewFile();
        // }
        // FileWriter writer = new FileWriter(file);
        
        // long start = System.nanoTime();
        Read r = new Read();
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        int n = r.nextInt();
        StringBuilder SB = new StringBuilder();
        // r.close();
        int[][] slave = new int[1030][1030];
        int x = (int) Math.pow(2, n);
        for (int i = 1; i <= x; i++)
            slave[i][1] = slave[i][i] = 1;

        for (int i = 1; i <= x; i++) {
            for (int j = 1; j < i; j++) {
                slave[i][j] = slave[i - 1][j - 1] % 2 + slave[i - 1][j] % 2;
            }
        }
        for (int i = 1; i <= x; i++) {
            for (int j = 0; j < x - i; j++) {
                SB.append(0).append(" ");
            }
            for (int j = 1; j <= i; j++) {
                if (slave[i][j] % 2 == 1)
                    SB.append(1).append(" ");
                else
                    SB.append(0).append(" ");
            }
            SB.append("\n");
        }
        pw.println(SB);
        // long end = System.nanoTime();
        // writer.write("运行时间为"+ (end-start) + "ns");
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