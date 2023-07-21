def findDisappearedNumbers(nums):
    n = len(nums)
    n_s = set(nums)
    arr = []
    while n != 0:
        if n not in n_s:
            arr.append(n)
            
        n -= 1
        
        
    print(arr)




findDisappearedNumbers([1,1])
