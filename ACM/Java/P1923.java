/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2022-12-14 20:31:50
 * @LastEditTime: 2023-07-12 11:59:31
 * @FilePath: /ACM/Java/P1923.java
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
/*
Name    :   P1923.java
Time    :   2022/12/14 20:31:48
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/



import java.util.Arrays;
import java.util.Scanner;

public class P1923 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] array = new int[n];
        for (int index = 0; index < n; index++) {
            array[index] = sc.nextInt();
        }
        sc.close();
        Arrays.sort(array);
        while ((array[k] == array[k - 1] && k > 0) || (array[k] == array[k - 1]) && k == 0) {
            k++;
        }
        System.out.println(array[k]);
    }

    public static int sort() {
        
    }
}

// import java.lang.Thread;

// public class P1923 {
// public static void main(String[] args) throws InterruptedException {
// int count = 0;
// for (float y = 2.5f; y > -2.0f; y -= 0.12f) {
// for (float x = -2.3f; x < 2.3f; x += 0.041f) {
// float a = x * x + y * y - 4f;
// if ((a * a * a - x * x * y * y * y) < -0.0f) {
// String str = "LOVE";
// int num = count % str.length();
// System.err.print(str.charAt(num));
// count++;
// } else {
// System.err.print(" ");
// }
// }
// System.err.println();
// Thread.sleep(100);
// }
// System.out.println("如果能好好被爱！");
// System.out.println("谁不想呆在一个人身边一年又一年呢！");
// }
// }
