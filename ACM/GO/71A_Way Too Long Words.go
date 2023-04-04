/*
 * @Author: KasperFan && fanwlx@foxmail.com
 * @Date: 2023-03-18 01:50:15
 * @LastEditTime: 2023-03-18 01:50:31
 * @FilePath: /ACM/GO/71A_Way Too Long Words.go
 * @Description: This file is created for learning Code.
 * Copyright (c) 2023 by KasperFan in WFU, All Rights Reserved.
 */
package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n int
	fmt.Scan(&n)
	words := make([]string, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&words[i])
		if len(words[i]) > 10 {
			words[i] = string(words[i][0]) + strconv.Itoa(len(words[i])-2) + string(words[i][len(words[i])-1])
		}
	}

	for _, word := range words {
		fmt.Println(word)
	}
}
