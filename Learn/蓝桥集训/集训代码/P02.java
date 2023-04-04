package 蓝桥集训.集训代码;

public class P02 {
    /*
     * 空间换时间
     * 统计所有小于非负整数n的质数数量
     * 输入：100000
     * 输出：
     * 解释：小于10的质数有4个：
     * 2、3、5、7
     */
    public static void main(String[] args) {
        long start = System.currentTimeMillis();// 获取开始时间
        int n = 1000000;
        System.out.println(count2(n));
        long end = System.currentTimeMillis();// 获取结束时间
        System.out.println("程序运行时间：" + (end - start) + "ms");
    }

    // 常规暴力，可能TLE。O(n^2)
    public static int count1(int n) {
        int ans = 0, i, j;
        for (i = 2; i < n; i++) {
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    break;
                }
            }
            if (i == j) {
                ans++;
            }
        }
        return ans;
    }

    // 通过数倍数优化。O(n*log n)
    public static int count2(int n) {
        boolean[] p = new boolean[n];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            p[i] = false;// 默认全是质数
        }

        for (int i = 2; i < n; i++) {
            if (p[i] == false) {// if判断是否是质数
                ans++;
            }
            for (int j = 0; j * i < n; j++) {// 质数的倍数 -> 不是质数
                p[i * j] = true;
            }
        }
        return ans;
    }
}
