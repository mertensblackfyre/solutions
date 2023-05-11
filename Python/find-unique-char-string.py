# Given a string s, find the first non-repeating character in it and return its index.
# If it does not exist, return -1.

def firstUniqChar(s):
    # Init new dict
    m = {}
    # Loop through the string
    for letter in range(len(s)):
        # If the letter is inside the dict then increment the count by one
        if s[letter] in m:
            m[s[letter]] += 1
        # If not set the letter count to one
        else:
          m[s[letter]] = 1

    # Loop throuh the string again
    for letter in range(len(s)):
        # Find the first unique letter then break the loop
        if m[s[letter]] == 1:
            print(letter)
            break


firstUniqChar("loveleetcode")
