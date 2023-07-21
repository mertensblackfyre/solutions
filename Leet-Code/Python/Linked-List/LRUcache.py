class LRUCache(object):

    def __init__(self, capacity):
        self.cap = capacity
        self.len = 0
        self.data = []
        self.tail = len(self.data)
        

    def get(self, key):
        for i in range(len(self.data)):
            if self.data[i][0] == key:
                return self.data[i][1]
        
        return -1

    def put(self, key, value):
        if self.len == self.cap:
            self.data.pop(self.tail)
            self.data.insert(self.tail,(key,value))
            if self.tail == len(self.data) - 1:
                self.tail = 0
            else:
                self.tail -= 1
        else:
            self.data.insert(self.tail,(key,value))
            self.len += 1
    
    def p(self):
        print(self.data)
        
        
#["LRUCache","put","put","put","put","get","get","get","get","put","get","get","get","get","get"]
#[[3],[1,1],[2,2],[3,3],[4,4],[4],[3],[2],[1],[5,5],[1],[2],[3],[4],[5]]
       
def main():
    l = LRUCache(3)
    l.put(1,1)
    l.put(2,2)
    l.put(3,3)
    l.put(4,4)
    
    l.p()
    #print(f"Get ->>>{l.get(2)}")
# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)

main()