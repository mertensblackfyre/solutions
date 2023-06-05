def missingNumber(nums):
    n = len(nums) + 1
    for i in range(n):
        if i not in nums:
            return i



x =missingNumber([0,1])

print(x)
