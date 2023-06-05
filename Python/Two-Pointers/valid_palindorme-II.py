# Given a string s, return true if the s can be palindrome
# after deleting at most one character from it

def isPalindorme(s):
    count = 0
    # Loop throuht the new string
    for i in range(len(s)):
        # Assign 2 pointers
        slow = s[i].lower()
        fast = s[len(s) - i - 1].lower()
        # If two characters are equal increment the c0unt
        if slow == fast:
            count += 1

    # Check if the count is equal to new length string
    return len(s) == count


def pa(s):

    # Loop trhout the string
    for i in range(len(s)):
        # Check if palidorme
        print(s[:i] + s[i+1:])

    return False

x = pa("aba")
print(x)
