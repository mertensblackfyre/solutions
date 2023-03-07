package main

import "fmt"

func twoSum(nums []int, target int) []int {
	var new_array []int
	var x int
	var y int
	for i := 0; i < len(nums); i++ {
		for j := 0; j < len(nums); j++ {
			if i != j {
				if nums[i]+nums[j] == target {
					x = i
					y = j
					break
				}
			}
		}
	}

	new_array = append(new_array, x)
	new_array = append(new_array, y)

	return new_array
}

func main() {
	arr := []int{3, 3}
	x := twoSum(arr, 6)

	fmt.Println(x)
}
