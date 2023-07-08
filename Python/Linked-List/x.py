class LRUCache(object):

    def __init__(self, capacity):
      self.m = {}
      self.len = 0 
      self.cap = capacity
      self.curr = len(self.m) - 1

    def get(self, key):
        if key not in self.m:
            print(-1)
            return -1
        
        print(f"Get ->>>{self.m.get(key)}")
        return self.m.get(key)

    def put(self, key, value):
        if key in self.m:
            self.m[key] = value
            return
        
        if self.len == self.cap:
            first_key = list(self.m.keys())[self.curr] 
            self.m.pop(first_key,None)
            self.m[key] = value
            self.curr = 0
            return
        
             
        self.m[key] = value
        self.len += 1
    
    
    def p(self):
        print(self.m)
        
        
#["LRUCache","put","put","put","put","get","get","get","get","put","get","get","get","get","get"]
#[[3],[1,1],[2,2],[3,3],[4,4],[4],[3],[2],[1],[5,5],[1],[2],[3],[4],[5]]
       
def main():
    l = LRUCache(2)
    l.put(2,1)
    l.put(2,2)
    l.get(2)
    l.put(1,1)
    l.put(4,1)
    l.get(2)
    l.p()
    
# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)

main()