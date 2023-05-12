def nextGreaterElement(nums1, nums2):
    arr = []
    for i in range(len(nums1)):
        for j in range(len(nums2)):
            if nums1[i] == nums2[j]:
                if j+1 < len(nums2) and nums2[j+1] > nums2[j]:
                    arr.append(nums2[j+1])
                arr.append(-1)

    print(arr)

nextGreaterElement([1,3,5,2,4],[6,5,4,3,2,1,7])
