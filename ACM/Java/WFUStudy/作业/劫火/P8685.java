/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-28 11:46:04
 * @LastEditTime: 2023-04-05 09:14:31
 * @FilePath: /Java/WFUStudy/作业/劫火/P8685.java
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved.
 */
package 作业.劫火;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;
import java.util.Arrays;

/**
 * @author kasperfan
 */
public class P8685 {
    static class TakeStore {
        int last = 1, id, grade = 0;
        boolean isInCache = false;

        public TakeStore(int id) {
            this.id = id;
        }

        public void putInCache() {
            this.isInCache = true;
        }

        public void outCache() {
            this.isInCache = false;
        }
    }

    static class Order implements Comparable<Order> {
        int ts, id;

        public Order(int ts, int id) {
            this.ts = ts;
            this.id = id;
        }

        @Override
        public int compareTo(Order o) {
            return Integer.compare(this.ts, o.ts);
        }

        @Override
        public String toString() {
            return "Order{" +
                    "ts=" + ts +
                    ", id=" + id +
                    '}';
        }
    }

//    static TakeStore[] stores = new TakeStore[10010];

    public static void main(String[] args) throws Exception {
        FastRead sc = new FastRead();
        TakeStore[] stores = new TakeStore[10010];
        int n = sc.nextInt(), m = sc.nextInt(), t = sc.nextInt(), ans = 0;
        for (int i = 1; i <= n; i++) stores[i] = new TakeStore(i);
        Order[] orders = new Order[m];
        for (int i = 0; i < m; i++) orders[i] = new Order(sc.nextInt(), sc.nextInt());
        Arrays.sort(orders);
        for (int i = 0; i < m; i++) {
            if (orders[i].ts <= t) {
                if (orders[i].ts > stores[orders[i].id].last + 1) {
                    stores[orders[i].id].grade = Math.max(0, orders[i].ts - (stores[orders[i].id].last + 1));
                    if (stores[orders[i].id].grade > 5) stores[orders[i].id].putInCache();
                    else if (stores[orders[i].id].grade <= 3)
                        stores[orders[i].id].outCache();
                    stores[orders[i].id].grade += 2;
                    if (stores[orders[i].id].grade > 5) stores[orders[i].id].putInCache();
                    stores[orders[i].id].last = orders[i].ts;
                } else {
                    stores[orders[i].id].grade += 2;
                    if (stores[orders[i].id].grade > 5) stores[orders[i].id].putInCache();
                    else if (stores[orders[i].id].grade <= 3)
                        stores[orders[i].id].outCache();
                    stores[orders[i].id].last = orders[i].ts;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            System.out.println(stores[i].grade);
            if (stores[i].isInCache) ans++;
        }
        System.out.println(ans);
    }

    static class FastRead {
        StreamTokenizer st = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));

        public int nextInt() throws Exception {
            st.nextToken();
            return (int) st.nval;
        }
    }

}
