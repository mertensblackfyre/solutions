def main(nums):
  # Initlize an new set  
    s = set()
  # Loop trought the numbers
    for i in range(len(nums)):
        # Check if the number is inside the set
        if nums[i] in s:
            # return true
            return True 
        # if not add it to the set
        s.add(nums[i])

   # return false
    return False


main([1,2,3,1])
