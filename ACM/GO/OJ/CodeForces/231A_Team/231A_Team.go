/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-18 01:55:49
 * @LastEditTime: 2023-04-06 13:58:54
 * @FilePath: /ACM/GO/231A_Team/231A_Team.go
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved.
 */
package main

import (
	"fmt"
)

func main() {
	var n int
	ans := 0
	fmt.Scanf("%d", &n)
	var form [1000][4]int
	for i := 0; i < n; i++ {
		fmt.Scanf("%d %d %d", &form[i][0], &form[i][1], &form[i][2])
		form[i][3] = form[i][0] + form[i][1] + form[i][2]
	}
	for i := 0; i < n; i++ {
		if form[i][3] >= 2 {
			ans++
		}
	}
	fmt.Println(ans)
}
