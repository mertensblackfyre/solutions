# Given a non-empty array of integers nums, 
# every element appears twice except for one. Find that single one.h

# You must implement a solution with a linear runtime complexity and use
# only constant extra space.

def main(nums):
    # Init a dict
    s = {}
    ans = 0
    # Loop trought the the arrays
    for x in range(len(nums)):
        # Check if the key exists
        value = s.get(nums[x],None)
        if value is None or value is not s :
            # If not set it to 0
            s[nums[x]] = 0
        # If the key is found increment the value by one
        s[nums[x]] = s[nums[x]] + 1


    # Loop throug the dict check if the value is one
    for key,value in s.items():
        if value == 1:
          ans = key 
          break

    return ans

main([4,1,2,1,2])


# Other solution using XOR
# class Solution(object):
#    def singleNumber(self, nums):
#       ans = 0
#      for x in nums:
#          ans ^= x
               
                
#    return ans
        
