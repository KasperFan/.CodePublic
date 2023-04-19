package WfuOJ;

import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 *
 * @name: E
 * @author： KasperFan
 * @date： 2023/4/1
 * @description： This file is created for learning Java coding
 * @modifiedBy：
 * @version: 1.0
 */

public class E {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n =1;
        BigInteger K = sc.nextBigInteger();
        BigInteger bi = BigInteger.ONE;
        for (int i = 1; ; i++) {
            bi.multiply(BigInteger.valueOf(n++));
        }

    }

//    public boolean check(BigInteger a,BigInteger b){
//        String check = a.toString();
//        for (BigInteger i = BigInteger.valueOf(check.length()-1); i.compareTo(BigInteger.ONE) >=0 ; i = i.subtract(BigInteger.ONE)) {
//            check.charAt(check.length()-1);
//        }
//    }
}
