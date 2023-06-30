class MinStack(object):

    def __init__(self):
        self.data = []
        self.head = -1
        self.len = 0
        

    def push(self, val):
        if self.len == 0:
            self.head = 0
        
        self.data.append(val)
        self.head += 1
        self.len += 1

    def pop(self):
        if self.len == 0:
            return 
        self.data.pop()
        self.len -= 1
        self.head -= 1
    

    def top(self):
        return self.data[self.len - 1]

    def getMin(self):
        m = 10000000
        for i in range(len(self.data)):
            if m > self.data[i]:
                m = self.data[i]
       
        print(m) 

def main():
    l1 = MinStack()
    l1.push(-2)
    l1.push(0)
    l1.push(-3)
    l1.getMin() 
    l1.pop()
    print(l1.top())
    l1.getMin()
    
    
    
main()