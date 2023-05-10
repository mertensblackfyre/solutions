# [*] Given two integer arrays nums1 and nums2,
# return an array of their intersection.
# [*] Each element in the result must be unique and you may return
# the result in any order.

def intersection(nums1, nums2):
    # Init a new array 
    array = []
    # Iterate throught both arrays
    for n1 in range(len(nums1)):
        for n2 in range(len(nums2)):
            # Check the intersection of the array
            if nums1[n1] == nums2[n2]:
                # Append it to the array
                array.append(nums1[n1])

    # Remove the duplicates using a set
    print(list(set(array)))

intersection([4,9,5],[9,4,9,8,4])
