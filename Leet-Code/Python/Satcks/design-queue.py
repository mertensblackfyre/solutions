class MyCircularQueue(object):

    def __init__(self, k):
        self.data = [0] * k
        self.head = -1
        self.tail = -1 
        self.size = k 
        self.len = 0
       
    def enQueue(self, value):

        if self.isFull():
            return False
        if self.isEmpty():
            self.head = 0

        self.tail = (self.tail + 1) % self.size
        self.data[self.tail]= value
        self.len += 1
        return True

    def deQueue(self):
        if self.isEmpty():
            return False

        if self.head == self.tail:
            self.head = -1
            self.tail = -1

        self.head = (self.head + 1) % self.size 
        self.len -= 1
        return True
    
    def Front(self):
        if self.isEmpty():
            return -1
        return self.data[self.head]
        

    def Rear(self):
        if self.isEmpty():
            return -1
        return self.data[(self.tail) % self.size]

    def isEmpty(self):
        return self.len == 0 

        
    def isFull(self):
       return self.len == self.size 
    
def main():
    q = MyCircularQueue(6)
    q.enQueue(6)
    q.enQueue(5)
    print(q.Rear())

main()