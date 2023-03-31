def containsNearbyDuplicate(nums, k):
    flag = False
    for i in range(len(nums)):
        for j in range(i+1,len(nums)):
            if nums[i] == nums[j] and abs(i-j) <= k:
                flag = True                    

    return flag
 
containsNearbyDuplicate([1,2,3,1,2,3],2)

