def sortArray(nums):
    for i in range(len(nums)):
        for j in range(len(nums) - 1):
            if nums[j] > nums[j+1]:
                tmp = nums[i]
                nums[i] = nums[j+1]
                nums[j+1] = tmp










sortArray([5,4,3,2,1])



