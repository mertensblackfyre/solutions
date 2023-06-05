def algo(pattern,s):
    m = {}
    count = 0
    str = s.split()

    if len(pattern) != len(str):
        return False

    for i in range(len(pattern)):
        if pattern[i] not in m:
            m[pattern[i]] = str[i]
        else:
            if m[pattern[i]] != str[i]:
                count += 1

    if count == 0:
        return True

    return False

def wordPattern(pattern, s):
    strs = s.split()
    return algo(strs,pattern) & algo(pattern,strs)      

bo = wordPattern("abba","dog dog dog dog")
print(bo)
