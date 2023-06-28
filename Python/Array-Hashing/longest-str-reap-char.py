def lengthOfLongestSubstring(s):
    S = set()
    l = 0
    res = 0
    for r in range(len(s)):
        while s[r] in S:
            S.remove(s[l])
            l += 1
        S.add(s[r])
        res = max(res,r - l + 1)
        

lengthOfLongestSubstring("abcabcbb")
