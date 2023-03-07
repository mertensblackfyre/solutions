package main

import "fmt"

func isValid(s string) bool {

	par := []string{}
	var t bool

	// Print an array in reverse order
	for i := 0; i < len(s); i++ {
		// par = append(par, s[i])
		if string(s[i]) == "{" || string(s[i]) == "(" || string(s[i]) == "[" {
			par = append(par, string(s[i]))
		}else if string(s[i]) == "}" || string(s[i]) == ")" || string(s[i]) == "]" {
			if len(par) == 0 || par[0] == string(s[i]) {
				t = false
			} else {
				t = true
				par = par[:len(par) - 1 ]
			}
		}
	}

	return t
}
func main() {
	
	t := isValid("[)")
	fmt.Println(t)
}
