def longestCommonPrefix(strs):
    # Set the base as the first string of the array
    base = strs[0]
    # Loop trought the chars in the base
    for i in range(len(base)):
        # Loop trouhg the words in the arrays; starting index will be one
        # cause the first as been set to base
        for word in strs[1:]:
            # if index is lenght word return eary
            # if word[i] is not equal to base[i] repeat the process
            if i == len(word) or word[i] != base[i]:
                    # Else return the prefix
                print(base[0:i])
                return base[0:i]


    print(base)

longestCommonPrefix(["flower","flow","flight"])
