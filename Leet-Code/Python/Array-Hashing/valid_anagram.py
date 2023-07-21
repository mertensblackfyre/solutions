
def isAnagram(s, t):
        S = {}
        T = {}
        flag = False

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
        try:
            for key in S:
                if S[key] == T[key]:
                    flag =  True
                else:
                    return False
        except KeyError:
            return False

        return flag
    
