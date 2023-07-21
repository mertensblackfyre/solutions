def checkInclusion(s1, s2):
    r = s1[::-1]
    for i in range(len(s2) - len(s1)):
        print(s2[i:i+len(s1)],r)
        if s2[i:i+len(s1)] == r or s2[i:i+len(s1)] == s1:
            print("True")
            return True
        
    return False


checkInclusion("adc","dcda")