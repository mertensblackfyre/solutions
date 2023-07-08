def dailyTemperatures(temperatures):
        stack = []
        o =[0] * len(temperatures)
        c = 0
        
        for i ,t in enumerate(temperatures):
            while stack and t > temperatures[stack[-1]]:
                c = stack.pop()
                o[c] = i - c 
            
            stack.append(i)
            

        print(o)


dailyTemperatures([73,74,75,71,69,72,76,73]) 