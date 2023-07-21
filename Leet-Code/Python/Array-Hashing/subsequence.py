def isSubsequence(s, t):
    result = True

    # Iterate through t characters
    for i in range(len(t)):
        # Check if c is in the iterator
        for c in s:
            # Update the result as false and break the loop
            if c not in i:
                result = False
                break
    # Return result
    return result


isSubsequence("axc,","ahbgdc")
