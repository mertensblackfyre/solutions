def sumOfMultiples(n):
    arr = []
    for i in range(0,n+1):
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            arr.append(i)

    
    return sum(arr)

x = sumOfMultiples(10)
print(x)
