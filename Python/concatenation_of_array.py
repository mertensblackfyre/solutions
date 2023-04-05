class Solution(object):
    def getConcatenation(self, nums):
        ans = list(nums)
        for i in range(len(nums)):
            ans.append(ans[i])

        return ans
