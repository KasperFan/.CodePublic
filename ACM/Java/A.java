import java.math.BigInteger;

/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-08 13:18:15
 * @LastEditTime: 2023-04-08 13:23:29
 * @FilePath: /Java/A.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
public class A {
    static BigInteger n = new BigInteger("202320232023");
    static BigInteger cnt = BigInteger.ONE;
    static BigInteger temp = BigInteger.ONE;
    static BigInteger ans = BigInteger.ZERO;
    public static void main(String[] args) {
        while (!temp.toString().equals(n.toString())) {
            cnt.multiply(temp).mod(temp);
        }
    }
}
