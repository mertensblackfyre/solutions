package main

func removeElement(nums []int, val int) int {
	var count int = 0

	for i := 0; i < len(nums); i++ {
		if nums[i] != val {
			nums[count] = nums[i]
			count++
		}
	}
	return count
}

func main() {
	nums := []int{3, 2, 2, 3}
	removeElement(nums, 3)
}
