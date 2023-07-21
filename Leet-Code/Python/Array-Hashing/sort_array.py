def sortArray(nums):
    for i in range(len(nums)-1):
        while nums[i] > nums[i+1]:
            tmp = nums[i]
            nums[i] = nums[i+1]
            nums[i+1] = tmp



    print(nums)




sortArray([5,2,3,1])

