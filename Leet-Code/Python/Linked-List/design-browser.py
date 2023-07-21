class Node(object):
    def __init__(self, url):
        self.url = url
        self.next = None
        self.prev = None

class BrowserHistory(object):

    def __init__(self, homepage):
        self.head =  Node(homepage)
        self.tail = self.head
        self.cursor = self.tail
        self.len = 0
        
    def visit(self, url):
        node = Node(url)
        self.tail.next = noe

        
        node.prev = self.tail
        node.next = None
        self.tail = node
        self.cursor = node
        
    def back(self, steps):
        
        while self.cursor.prev and steps > 0:
            self.cursor = self.cursor.prev 
            steps -= 1
        
        return self.cursor.url
        
        
            
    def forward(self, steps):  
        while self.cursor.next and steps > 0:
            self.cursor = self.cursor.next 
            steps -= 1
        
        return self.cursor.url
       
    def p(self):
        curr = self.head 
        while curr:
            print(f"{curr.url} ->")
            curr = curr.next
#[["leetcode.com"],["google.com"],["facebook.com"],["youtube.com"],
 #[1],[1],[1],["linkedin.com"],[2],[2],[7]]
 #[null,null,null,null,"facebook.com","google.com"
 # ,"facebook.com",null,"linkedin.com","google.com","leetcode.com"]
 

def main():
    b = BrowserHistory("leetcode.com")
    b.visit("google.com")
    b.visit("facebook.com")
    b.visit("youtube.com")
    b.p()
    b.back(1)
    b.back(1)


main()