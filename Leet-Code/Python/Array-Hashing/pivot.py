def pivotIndex(nums):
    right = sum(nums)
    left = 0
   
    for i in range(len(nums)):
        right -= nums[i]
        if left == right:
            print(i)
            return i
        
        left += nums[i]

    return -1

x = pivotIndex([2,1,-1])

