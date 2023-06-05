def twoSum(numbers, target):
    M = {}
    for i in range(len(numbers)):
        c = target - numbers[i]
        if c in M:
            return [M[c],i]
        else:
            M[numbers[i]] = i

x = twoSum([2,7,11,15],9)
print(x)
