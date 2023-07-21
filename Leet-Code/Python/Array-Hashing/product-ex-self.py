def h(k,nums):
    p = 1
    for i in range(len(nums)):
        if i != k:
            print(i)
            p *= nums[i]
            k += 1

def main(nums):
    p1 = 0
    
    while p1 < len(nums):
      h(p1,nums)
      p1+= 1 

main([1,2,3,4])