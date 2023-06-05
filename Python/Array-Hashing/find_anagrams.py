def isAnagram(s, t):
    S = {}
    T = {}
    if len(s) != len(t):
        return False

    for i in range(len(s)):
        if s[i] in S:
            S[s[i]] += 1
        else:
            S[s[i]] = 1

        if t[i] in T:
            T[t[i]] += 1
        else:
            T[t[i]] = 1

    return S == T


def findAnagrams(s, p):
    n = len(p)
    count = 0
    arr = []

    for i in range(len(s)):
        an = s[i:count + n]
        count += 1
        print(an,p)
        x = isAnagram(an,p)
        print(x)
        if x == True:
            arr.append(i)

    return arr        


