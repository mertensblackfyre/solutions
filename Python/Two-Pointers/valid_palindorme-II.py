# Given a string s, return true if the s can be palindrome
# after deleting at most one character from it

def isPalindorme(s):
    new_str = s
    count = 0
    # Loop throuht the new string
    for i in range(len(new_str)):
        # Assign 2 pointers
        slow = new_str[i].lower()
        fast = new_str[len(new_str) - i - 1].lower()
        # If two characters are equal increment the c0unt
        if slow == fast:
            count += 1

    # Check if the count is equal to new length string
    return len(new_str) == count


def pa(s):

    if isPalindorme(s):
        return True
    # Loop trhout the string
    for i in range(len(s)):
        # Remove one character
        s1 =  s.replace(s[i],"",1)
        # Check if palidorme
        if isPalindorme(s1):
            # Return True
            return True
    

    return False

x = pa("cbbcc")
print(x)
