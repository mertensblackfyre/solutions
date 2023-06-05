class Solution(object):
    def moveZeroes(self, nums):
        p1 = 0
        p2 = 0 
        while p2 < len(nums):
            if nums[p2] != 0:
                nums[p1],nums[p2] = nums[p2],nums[p1]
                p1 += 1
                p2 += 1
            else:
                p2 += 1


        print(nums)





x = Solution()
print(x.moveZeroes(nums=[0,1,0,3,12]))
