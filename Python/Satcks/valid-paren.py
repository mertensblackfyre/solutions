def isValid(s):
    stack = []
    m = {
        "(":")",
        "{" :"}",
        "[":"]",
    }
    

    for c in s:
        if c in m:
            if stack and stack[-1] == m[c]:
                stack.pop(c)
            else:
                return False
        else:
            stack.append(c)
              
    return True if not stack else False  

isValid("()")
        

        
      