package main

import (
	"fmt"
	"strconv"
)

func ReverseString(str string) string {
	rns := []rune(str)
	for i, j := 0, len(rns)-1; i < j; i, j = i+1, j-1 {
		rns[i], rns[j] = rns[j], rns[i]
	}
	return string(rns)
}

func isPalindrome(x int) bool {
	strrev := ReverseString(strconv.Itoa(x))
	if num,_ := strconv.Atoi(strrev); x == num {
		return true
	}
	return false
}

func main() {
	// isPalindrome(121)
	fmt.Println(isPalindrome(121))
}
