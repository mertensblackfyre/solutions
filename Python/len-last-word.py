def lengthOfLastWord(s):
    lens= 0
    s = s.rstrip()
    for char in s[::-1]:
        if char.isspace() is False:
            lens += 1
        else:
            break
    
    print(lens)
           

lengthOfLastWord("   fly me   to   the moon ")
