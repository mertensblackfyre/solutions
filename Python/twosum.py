from ast import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        y = x = 0
        arr = []
        for i in range(len(nums)):
            for j in range(len(nums)):
                if i != j:
                    if nums[i] + nums[j] == target:
                        x = i
                        y = j                
        arr.append(y)
        arr.append(x)
        return arr
        