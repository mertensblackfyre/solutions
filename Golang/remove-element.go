package main

import "fmt"

var tmp, b, a int

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func removeElement(nums []int, val int) int {
	var count int = 0
	for i := 0; i < len(nums); i++ {

		// a = nums[i]
		// b = nums[min(i+1, len(nums))]
		// tmp = a
		// a = b
		// b = tmp

		// nums[i] = a
		// fmt.Println(nums)
		
		// if nums[i] != val {
		// 	fmt.Println(nums[i])
		// 	count++
		// }
	}

	return count
}

func main() {
	nums := []int{3, 2, 2, 3}

	x := removeElement(nums, 3)
	fmt.Println(x)
}
