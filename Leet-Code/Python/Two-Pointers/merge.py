def merge(nums1, m, nums2, n):
    for i in range(len(nums1)):
        if nums1[i] == 0:
            nums1[i], nums2[i] = nums2[i],nums1[i]


    print(nums1)


merge([1,2,3,0,0,0],3,[2,5,6],3)
