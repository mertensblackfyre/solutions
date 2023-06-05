class MyLinkedList(object):

    def __init__(self):
        self.head = None
        self.val = 0
        self.next = None


    def print_l(self):
    
        current = self.head

        if current is None:
            return 

        while current is not None:
            print(current.val)
            current = current.next

    def addAtHead(self, val):

        node  =  MyLinkedList()
        node.val = val
        node.next = self.head
        self.head = node # simplify the logic for adding at head

    def addAtTail(self, val):

        node = MyLinkedList()
        node.val = val
        current = self.head

        if self.head == None:
            self.head = node # handle the case when the list is empty
            return

        if current is None:
            return

        while current.next is not None: # use current.next instead of current to avoid AttributeError
            current = current.next

        current.next = node # add the node at the end of the list


    def deleteAtIndex(self, index):
        idx = 0
        current = self.head

        if self.head is None: # handle the case when the list is empty
           return

        if current is None:
           return

        if index == 0: # handle the case when index is zero
            self.head = current.next
            return

        while current is not None and idx != index - 1: # use index - 1 to find the previous node of the target position
            current = current.next
            idx += 1

        if current is None or current.next is None: # handle the case when index is out of range or the last node
            return

        current.next = current.next.next # delete the node at the target position by skipping it in the link```



    def deleteDuplicates(self):
        curr = self.head
        idx = 0
        while curr != None:
            next = curr.next
            if next is None:
                return

            if curr.val == next.val:
                self.deleteAtIndex(idx)
    
            curr = curr.next
            idx += 1


def main():
    l1 = MyLinkedList()
    l1.addAtHead(1)
    l1.addAtTail(1)

    l1.addAtTail(2)
    l1.addAtTail(3)
    l1.addAtTail(3)

    l1.deleteDuplicates()
    l1.print_l()


main()
