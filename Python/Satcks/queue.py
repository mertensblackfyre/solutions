class MyCircularQueue(object):

    def __init__(self, k):
        self.data = []
        self.head = -1
        self.tail = -1 
        self.size = k 


    def printq(self):
        print(self.data)
       
    def enQueue(self, value):

        if self.isFull():
            return False
        if self.isEmpty():
            self.head = 0

        self.tail = (self.tail + 1) % self.size
        self.data[self.tail] = value
        return True

    def deQueue(self):
        if self.isEmpty():
            return False

        self.data.remove(self.data[self.head])
        self.head -= 1 
    
    def Front(self):
        return self.data[self.head]
        

    def Rear(self):
        return self.data[self.tail]

    def isEmpty(self):
        return len(self.data) == -1

        
    def isFull(self):
        return len(self.data) == self.size


def main():
    q = MyCircularQueue(3)
    q.enQueue(1)
    q.enQueue(2)
    q.enQueue(3)
    q.enQueue(4)
    print(q.Rear())
    print(q.isFull())
    q.deQueue()
    q.enQueue(4)
    print(q.Rear)
    q.printq()



main()