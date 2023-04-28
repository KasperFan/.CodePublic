package Test;
/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-02-18 01:40:59
 * @LastEditTime: 2023-03-06 19:47:52
 * @FilePath: /.code/Test.java
 * @Description: This file is created for learning Code.
 * 
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */

import java.util.Scanner;
import SHA256;
public class Test_01 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SHA256 secr = new SHA256();
        String a = sc.nextLine();
        sc.close();
        System.out.println(secr.getSHA256(a));
    }
}