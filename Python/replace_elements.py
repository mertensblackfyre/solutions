def replaceElements(arr):
    max = -1
    for i in range(len(arr)-1,-1,-1): 
        tmp = arr[i]
        arr[i] = max
        max  = max(arr[i],tmp)
   

replaceElements([17,18,5,4,6,1])
