def containsdupe(nums,k):
    x = False
    for i in range(len(nums)):
        for j in range(len(nums) - 1):
            if nums[i] == nums[j+1] and abs(i - j) <= k:
                x = True
            else:
                x = False
            
    print(x)


containsdupe([1,2,3,1,2,3],2)
