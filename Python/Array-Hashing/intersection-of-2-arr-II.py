# Given two integer arrays nums1 and nums2, return an array of their intersection.
# Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
def intersect(nums1, nums2):
    # Init new array
    arr = []
    m = {}
    # Iterate throught the lists
    for i in range(len(nums1)):
        # Check if the number is in the dict
        if m.get(nums1[i], 0) > 0:
            # Increment the count by 1
            m[nums1[i]] += 1
        else:
            # Else set the count to 1
            m[nums1[i]] = 1

    for i in range(len(nums2)):
        # Check if the number is in the dict
        if m.get(nums2[i], 0) > 0:
            m[nums2[i]] -= 1
            arr.append(nums2[i])
    return arr

intersect([4,9,5],[9,4,9,8,4])
