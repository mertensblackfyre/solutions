from ast import List


class Solution:
    def sortColors(self, nums: List[int]) -> None:
        p1 = 0
        p2 = 1
        
        while nums.sort() != nums and p2 < len(nums):
                if nums[p1] > nums[p2]:
                    nums[p1] ,nums[p2] = nums[p2] ,nums[p1]
            
                p1 += 1
                p2 += 1