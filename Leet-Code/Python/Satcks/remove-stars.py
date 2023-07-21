def removeStars(s):
        stacks = []
        for i in range(len(s)):
            if stacks and s[i] == "*":
                stacks.pop()
            else:
                stacks.append(s[i])
        
        
        print(stacks)


removeStars("leet**cod*e")
                
        