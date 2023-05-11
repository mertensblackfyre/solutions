# Given two integer arrays nums1 and nums2, return an array of their intersection.
# Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
from collections import defaultdict
def intersect(nums1, nums2):
    # Init new array
    m = defaultdict(int) 
    # Iterate throught the lists
    for i in range(len(nums1)):
        for j in range(len(nums2)):
            # Check the intersection of the lists
            if nums1[i] == nums2[j]:
                m[nums1[i]] += 1
                m[nums2[j]] += 1


    print(m)


intersect([4,9,5],[9,4,9,8,4])
