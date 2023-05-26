def longestConsecutive(nums):
    nums.sort()
    print(nums)
    for i in range(len(nums) - 1):
        if nums[i] + 1 != nums[i+1]:
            print(nums[i])
            break







longestConsecutive([0,3,7,2,5,8,4,6,0,1])
