# Given an array of integers nums and an
# integer target, return indices of the two numbers such that they add up to target.

#You may assume that each input would have exactly one solution, and you may not use the same element twice.

#You can return the answer in any order.

def twosum(nums,target):
    x = 0
    y = 0
    array = []
    # Loop through the array twice
    for i in range(0,len(nums)):
        for j in range(0,len(nums)):
            # If i is not equal to j
            if i != j:
                # Add the nums in array and check if they are equal to the target
                if nums[i] + nums[j] == target:
                    # Save them in the variable
                    x = i
                    y = j
    # Apped to the array
    array.append(x)
    array.append(y)

    # Remove dupliacates then return it
    list(set(array))

twosum([2,4,11,3],6)
