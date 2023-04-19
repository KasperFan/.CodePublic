package main

import (
	"fmt"
	"os"
)

func main() {
	file, err := os.Open("data_1.in")
	if err != nil {
		panic(err)
	}
	var n int
	ans := 0
	fmt.Fscanf(file, "%d", &n)
	var form [1000][4]int
	for i := 0; i < n; i++ {
		fmt.Fscanf(file, "%d %d %d", &form[i][0], &form[i][1], &form[i][2])
		form[i][3] = form[i][0] + form[i][1] + form[i][2]
	}
	for i := 0; i < n; i++ {
		if form[i][3] >= 2 {
			ans++
		}
	}
	fmt.Println(ans)
}