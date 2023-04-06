/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-15 22:44:26
 * @LastEditTime: 2023-04-05 02:12:02
 * @FilePath: /ACM/GO/P4017最大食物链计数.go
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved.
 */

package main

import (
	"fmt"
)

func main() {
	var n, m int
	fmt.Scanf("%d %d", &n, &m)
	mod := 80112002
	edges := make([][]int, n+1)   // 记录每种生物的食谱
	indegree := make([]int, n+1)  // 记录每种生物的入度(吃多少种生物)
	outdegree := make([]int, n+1) // 记录每种生物的出度(被多少种生物吃)
	for i := 0; i < m; i++ {
		var a, b int
		fmt.Scanf("%d %d", &a, &b)
		edges[b] = append(edges[b], a) // 将A添加到B的菜谱里
		indegree[b]++
		outdegree[a]++
	}
	dp := make([]int, n+1)
	queue := make([]int, 0)
	for i := 1; i <= n; i++ {
		if outdegree[i] == 0 { // 遍历查找吊炸天谁都吃不了它的顶级捕食者
			queue = append(queue, i)
			dp[i] = 1 // 因为从完美生产者开始到顶级捕食者之间必然会有一条最大食物链，所以置其初值为1
		}
	}
	for len(queue) > 0 { // 当队列中不为空时
		node := queue[0]
		queue = queue[1:]                 // node接收从队列头弹出的元素
		for _, pre := range edges[node] { // 翻阅捕食者食谱
			dp[pre] += dp[node]      // 因为处于被吃地位，所以与捕食者共享捕食者的所有链
			dp[pre] %= mod           // 闲暇之余取个模
			outdegree[pre]--         // 整理好了与其中一个捕食者的食物链后，将其与该捕食者的关系出度抹去
			if outdegree[pre] == 0 { // 如果整理完了其与所有捕食者的关系后
				queue = append(queue, pre) // 将其置入队列，梳理其食谱中动物的链关系
			}
		}
	}
	ans := 0                  // 定义答案变量
	for i := 1; i <= n; i++ { // 遍历查找弱到只能被吃的完美生产者
		if indegree[i] == 0 { // 找到完美生产者了
			ans += dp[i] // 加上从完美生产者开始的最大食物链条数
		}
	}
	ans %= mod
	fmt.Printf("%d", ans)
}
