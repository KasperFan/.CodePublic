/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-05 19:24:55
 * @LastEditTime: 2023-04-05 20:12:12
 * @FilePath: /Java/WFUStudy/Day4_5训练III/P1093.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
package Day4_5训练III;

import java.util.Arrays;
import java.util.Comparator;
import java.io.*;

public class P1093 {

    public static void main(String[] args) throws Exception {
        Read sc = new Read();
        StringBuilder ans = new StringBuilder();
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));

        int n = sc.nextInt();
        Student[] students = new Student[n];
        for (int i = 0; i < students.length; i++) {
            students[i] = new Student(i + 1, sc.nextInt(), sc.nextInt(), sc.nextInt());
        }
        Arrays.sort(students, new CompareChinese());
        Arrays.sort(students, new CompareTotal());
        for (int i = 0; i < 5; i++) {
            ans.append(students[i].id + " " + students[i].total + "\n");
        }
        pw.print(ans);
        pw.flush();
    }

    public static class Student {

        int id, chinese, math, english, total;

        public Student(int id, int chinese, int math, int english) {
            this.id = id;
            this.chinese = chinese;
            this.math = math;
            this.english = english;
            this.total = this.chinese + this.math + this.english;
        }

    }
    static class CompareChinese implements Comparator<Student> {

        @Override
        public int compare(Student o1, Student o2) {
            return o2.chinese - o1.chinese;
        }

    }

    static class CompareTotal implements Comparator<Student> {
        @Override
        public int compare(Student o1, Student o2) {
            return o2.total - o1.total;
        }
    }

    /**
     * Read
     */
    static class Read {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StreamTokenizer st = new StreamTokenizer(br);

        public String nextLine() throws Exception {
            return br.readLine();
        }

        public int nextInt() throws Exception {
            st.nextToken();
            return (int) st.nval;
        }

        public double nextDouble() throws Exception {
            st.nextToken();
            return st.nval;
        }
    }
}
