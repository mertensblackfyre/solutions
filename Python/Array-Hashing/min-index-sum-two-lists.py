# Given two arrays of strings list1 and list2, find the common strings with the least idex sum.

# A common string is a string that appeared in both list1 and list2.

# A common string with the least index sum is a common string such that if it appeared at list1[i] and list2[j] then i + j should be the minimum value among all the other common strings.

# Return all the common strings with the least index sum. Return the answer in any order.

def findRestaurant(list1, list2):
    max =  922337203685477580
    arr = []
    # Iterate through the lists
    for i in range(len(list1)):
        for j in range(len(list2)):
            # Check if the lists of words are the same
            if list1[i] == list2[j]:
                # Find the min of the sum of the indexes of the identical words
                if i + j <  max:
                    max = i + j
                    # Clear the list
                    arr[:] = []
                    # Append to the new array
                    arr.append(list1[i])
                if i + j == max:
                    arr.append(list1[i])


    print(list(set(arr)))


findRestaurant(["Shogun","Piatti","Tapioca Express","Burger King","KFC"],["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"])
       
