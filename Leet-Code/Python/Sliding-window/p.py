# Function to find the maximum sum of k consecutive elements in an array
def maxSum(arr, n, k):
  # Check if k is larger than n
  if k > n:
    return -1 # Invalid input
  
  # Initialize the current sum and the maximum sum
  curr_sum = sum(arr[:k]) # Sum of the first k elements
  max_sum = curr_sum # Maximum sum so far
  
  # Loop through the remaining elements of the array
  for i in range(k, n):
    # Update the current sum by adding the next element and subtracting the first element of the window
    curr_sum = curr_sum + arr[i] - arr[i-k]
    # Update the maximum sum if needed
    max_sum = max(max_sum, curr_sum)
  
  # Return the maximum sum
  return max_sum