# Define a function that takes a list of numbers as input and returns the majority element
def majorityElement(nums):
    # Create an empty dictionary to store the frequency of each number
    m = {}
    # Initialize a variable to keep track of the maximum frequency
    max = 0
    # Loop through the list of numbers
    for i in range(len(nums)):
        # If the number is not in the dictionary, add it with a value of zero
        if nums[i] not in m:
            m[nums[i]] = 0

        # Increment the frequency of the number by one
        m[nums[i]] += 1
        # If the frequency of the number is greater than the maximum frequency, update the maximum frequency
        if m[nums[i]] > max:
            max = m[nums[i]]

    # Create a list of keys that have the maximum frequency
    keys = [k for k, v in m.items() if v == max]
    # Print the first key in the list (assuming there is only one majority element)
    print(keys[0])
# Call the function with an example list
y = majorityElement([6,5,5])

