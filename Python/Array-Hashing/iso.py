def helper(s,t):
    m = {}
    for i in range(len(s)):
        if s[i] in m:
            if m[s[i]] != t[i]:
                return False


        m[s[i]] = t[i]

    return True

def isIsomorphic(s, t):

    return helper(s,t) and helper(t,s)
   

x = isIsomorphic("badc","baba")
print(x)
 
        
