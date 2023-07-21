def nextGreaterElement(nums1, nums2):
    arr = []
    for i in range(len(nums2)):
        for j in range(len(nums1)):
            if nums2[i] == nums1[j]:
                print(nums1[j])
                if i + 1 < len(nums2):
                    if nums2[i] < nums2[i+1]:
                        arr.append(nums2[i+1])
                    arr.append(-1)

    print(arr)

nextGreaterElement([4,1,2],[1,3,4,2])
