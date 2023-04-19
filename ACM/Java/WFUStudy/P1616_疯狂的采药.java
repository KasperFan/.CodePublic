/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-04-04 16:46:33
 * @LastEditTime: 2023-04-05 09:15:08
 * @FilePath: /Java/WFUStudy/P1616_疯狂的采药.java
 * @describes: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved. 
 */
/*
Name    :   P1616_疯狂的采药.java
Time    :   2023/02/18 17:44:52
Author  :   Kasper Fan
Group   :   Weifang University
Contact :   fanwlx@foxmail.com
Desc    :   This file is created for learning Java coding
*/

import java.util.Scanner;

public class P1616_疯狂的采药 {
    final static int N = 10010, M = (int) (1e7 + 10);
    static int t, m;
    static long[] value = new long[N], time = new long[N];
    static long[] dp = new long[M];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        m = sc.nextInt();
        for (int i = 1; i <= m; i++) {
            time[i] = sc.nextLong();
            value[i] = sc.nextLong();
        }
        for (int i = 1; i <= m; i++) {
            for (int j = (int) time[i]; j <= t; j++) {
                dp[j] = Math.max(dp[j], dp[(int) (j - time[i])] + value[i]);
            }
        }
        sc.close();
        System.out.println(dp[t]);
    }
}

// /*
// * 从状态转移方程下手：f[i][j] = max(f[i-1][j- k * v[i]]+ k * w[i] (k= 0, 1, 2, 3, 4,…))
// * 方程拆开：
// */
// f[i][j]=max(f[i-1][j],f[i-1][j-v[i]]+w[i],f[i-1][j-2*v[i]]+2*w[i],f[i-1][j-3*v[i]]+3*w[i],......);
// // 使用代入法，将j= j-v[i]带入上面的方程中得到：
// f[i][j-v[i]]=max(f[i-1][j-v[i]],f[i-1][j-2*v[i]]+w[i],f[i-1][j-3*v[i]]+2*w[i],f[i-1][j-3*v[i]]+3*w[i],......)
// // 对比第二个和第一个方程，我们发现，方程1可以简化成：
// f[i][j]=max(f[i-1][j],f[i][j-v[i]]+w[i])
// /*
// * 怎么看起来跟01背包模型的好像啊，我们对比一下：
// */
// f[i][j]=max(f[i-1][j],f[i-1][j-v[i]]+w[i]) // 01背包
// f[i][j]=max(f[i-1][j],f[i][j-v[i]]+w[i]) // 完全背包

// /*
// * 发现了区别在下标从i-1变为i。为什么呢？
// * f[i][j - v[i]] 已经将除去1个物品i时的所有最优解已经求出来了，因此在计算f[i][j]时，无需再重复计算k=2,3,4,5…时的值了。
// */
