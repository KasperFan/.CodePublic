package com.boda.practice;

import com.boda.xy.Array;

import java.util.Arrays;

public class Main {
    static double[] a = {75, 53, 32, 12, 46, 199, 17, 54};
    static int[] a2 = {75, 53, 32, 12, 46, 199, 17, 54};

    static int[] sum1 = {1, 2, 4}, sum2 = {2, 4, 6, 8};

    public static double total(double[] array) {
        double total = 0;
        for (var elem : array) {
            total += elem;
        }
        return total;
    }

    public static double max(double[] array) {
        double max = 0;
        for (var elem : array) {
            max = Math.max(max, elem);
        }
        return max;
    }

    public static double min(double[] array) {
        double min = Double.POSITIVE_INFINITY;
        for (var elem : array) {
            min = Math.min(min, elem);
        }
        return min;
    }

    public static double average(double[] array) {
        double temp = 0;
        for (var elem : array) {
            temp += elem;
        }
        return temp / array.length;
    }

    public static void printFibonacci() {
        int[] fibonacci = new int[20];
        fibonacci[0] = fibonacci[1] = 1;
        for (int i = 2; i < fibonacci.length; i++) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
        for (var elem :
                fibonacci) {
            System.out.println(elem);
        }
    }

    public static void reversePrintArray(int[] array) {
        StringBuilder sb1 = new StringBuilder(), sb2 = new StringBuilder();
        int[] reverse = Array.reverse(array);
        for (int i = 0; i < array.length; i++) {
            sb1.append(array[i]).append(" ");
            sb2.append(reverse[i]).append(" ");
        }
        System.out.println(sb1);
        System.out.println(sb2);
    }

    public static void selectSort(int[] array) {
        int minIndex;
        for (int i = 0; i < array.length - 1; i++) {
            minIndex = i;
            for (int j = i; j < array.length; j++) {
                if (array[minIndex] > array[j]) minIndex = j;
            }
            if (minIndex != i) {
                int temp = array[minIndex];
                array[minIndex] = array[i];
                array[i] = temp;
            }
        }
    }

    public static int[] sumArray(int[] a, int[] b) {
        int maxLen = Math.max(a.length, b.length), minLen = Math.min(a.length, b.length);
        int[] result = new int[maxLen];
        for (int i = 0; i < minLen; i++) {
            result[i] = a[i] + b[i];
        }
        for (int i = minLen; i < maxLen; i++) {
            result[i] = a.length < b.length ? b[i] : a[i];
        }
        return result;
    }

    public static int[] arrayMerge(int[] a, int[] b) {
        int[] result = new int[Math.max(a.length, b.length)];
        System.arraycopy(a, 0, result, 0, a.length);
        System.arraycopy(b, 0, result, a.length, b.length);
        Arrays.sort(result);
        return result;
    }

    public static void main(String[] args) {
        printFibonacci();
        reversePrintArray(a2);
        selectSort(a2);
        for (var elem :
                a2) {
            System.out.println(elem);
        }
        for (var elem :
                sumArray(sum1, sum2)) {
            System.out.println(elem);
        }
    }

}
