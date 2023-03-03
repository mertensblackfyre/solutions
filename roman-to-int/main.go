package main

import "fmt"

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

	for i := 0; i < len(s); i++ {
		_, prs := roman[s]
		fmt.Println(prs)
		// if roman[s] {
			
		// }
		// fmt.Printf("%c\n", s[i])
	}

	for k, v := range roman {
		fmt.Println(k, v)
	}

	return 1
}
func main() {
	romanToInt("III")

}
