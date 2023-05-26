def lengthOfLongestSubstring(s):
    m = {}
    count = 0

    for i in range(len(s)):
        if s[i] not in m:
            m[s[i]] = 0
            count += 1

    
        m[s[i]] +=  1

    print(count)


lengthOfLongestSubstring("pwwkew")
