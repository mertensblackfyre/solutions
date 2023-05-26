# A phrase is a palindrome if, after converting all uppercase letters into lowercase 
# letters and removing all non-alphanumeric characters, it reads the same forward and backward. 
# Alphanumeric characters include letters and numbers.

# Given a string s, return true if it is a palindrome, or false otherwise.

#Solution 2
def isPalindrome(s):
    count = 0
    new_str = ""
    # Remove none alpha characters
    for c in s:
        if c.isalnum():
            new_str += c.lower()

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



# Solution 1
# def isPalindrome(s):
    # Use regex pattern to remove none alphatet characters
#    st = re.sub(r'[\W_]','',s)
    # Compare the string and the reversed string
#    return st.lower() == st[::-1].lower()

x = isPalindrome("A man, a plan, a canal: Panama")
print(x)
