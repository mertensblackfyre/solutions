def replaceElements(arr):
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if arr[i] < arr[j]:
                arr[i] = arr[j]

        print(arr)
    

replaceElements([17,18,5,4,6,1])
