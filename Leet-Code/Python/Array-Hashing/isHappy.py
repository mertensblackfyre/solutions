# Write an algorithm to determine if a number n is happy.
# A happy number is a number defined by the following process:
# [*] Starting with any positive integer, replace the number by the
# sum of the squares of its digits.
# [*] Repeat the process until the number equals 1 (where it will stay),
# or it loops endlessly in a cycle which does not include 1.
# [*] Those numbers for which this process ends in 1 are happy.
# [*] Return true if n is a happy number, and false if not.


def isHappy(n):

    # Check if the number is one 
    if n == 1:
        # If true then return true
        return True

    # Init  a new set 
    S = set(())
    # Split the number into digits then square it
    digits = [int(x) ** 2 for x in str(n)]
 
    # Iterate till the number is equal to one
    while n != 1:
      # The sum of the square digits
      n = sum(digits)
      # Check if the n is one
      if n == 1:
          # Return true
          return True
      # Check if the number is in the set
      if n in S:
          # Return false
          return False

     # Add the number in the set
      S.add(n)

isHappy(19)
       
