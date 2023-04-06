/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-15 22:44:26
 * @LastEditTime: 2023-04-05 01:29:39
 * @FilePath: /ACM/GO/P4017.go
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved.
 */

package main

import (
	"fmt"
	"os"
)

func main() {
	data, err := os.Open("./P4017_1.in")
	if err != nil {
		panic(err)
	}
	var n, m int
	_, err = fmt.Fscanf(data, "%d %d", &n, &m)
	mod := 80112002
	edges := make([][]int, n+1)
	indegree := make([]int, n+1)
	outdegree := make([]int, n+1)
	for i := 1; i <= n; i++ {
		indegree[i] = 0
		outdegree[i] = 0
	}
	for i := 0; i < m; i++ {
		var a, b int
		_, err = fmt.Fscanf(data, "%d %d", &a, &b)
		edges[b] = append(edges[b], a)
		indegree[a]++
		outdegree[b]++
	}
	dp := make([]int, n+1)
	queue := make([]int, 0)
	for i := 1; i <= n; i++ {
		if indegree[i] == 0 {
			queue = append(queue, i)
			dp[i] = 1
		}
	}
	for len(queue) > 0 {
		node := queue[0]
		queue = queue[1:]
		for _, pre := range edges[node] {
			dp[pre] += dp[node]
			dp[pre] %= mod
			indegree[pre]--
			if indegree[pre] == 0 {
				queue = append(queue, pre)
			}
		}
	}
	ans := 0
	for i := 1; i <= n; i++ {
		if outdegree[i] == 0 {
			ans += dp[i]
		}
	}
	ans %= mod
	fmt.Println(ans)
}
