package main

import (
	"strings"
)

func romanToInt(s string) int {

	roman := map[string]int{
		"I": 1,
		"V": 5,
		"X": 10,
		"L": 50,
		"C": 100,
		"D": 500,
		"M": 1000,
	}

	res := strings.Split(s, "")
	sum := 0
	for i := 0; i < len(res); i++ {
		var l int
		var k int
		k = roman[res[i]]
		if i-1 != -1 {
			l = roman[res[i-1]]
		}
		if l < k {
			sum = sum - l + (k - l)
		} else {
			sum += k
		}
	}

	return sum
}
func main() {
	romanToInt("MCMXCIV")

}
