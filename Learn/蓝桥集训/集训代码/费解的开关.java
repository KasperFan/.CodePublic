package 蓝桥集训.集训代码;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StreamTokenizer;
import java.util.Scanner;

public class 费解的开关 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        // Read fr = new Read();
        PrintWriter p = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        int n = sc.nextInt();
        StringBuilder[] stringBuilders = new StringBuilder[n];
        for (int i = 0; i < n; i++) {
            while (sc.hasNext()) {
                stringBuilders[i].append(sc.nextLine()).append('\n');
            }
        }
        sc.close();
        for (int i = 0; i < n; i++) {
            p.print(stringBuilders[i]);
            p.flush();
        }
    }
    
    /**
    * Read
    */
    static class Read { 
        StreamTokenizer st = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        public int nextInt() throws Exception {
            st.nextToken();
            return (int) st.nval;
        }
        public String readLine() throws Exception {
            return br.readLine();
        }
    }

}
