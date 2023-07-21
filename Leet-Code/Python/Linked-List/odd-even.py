# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def oddEvenList(self, head):
        d1 = ListNode()
        d2 = ListNode()
        t1 = d1
        t2 = d2
        curr = 0

        while head:
            if curr % 2 == 0:
                t1.next = head
                t1 = t1.next

            if curr % 2 != 0:
                t2.next = head
                t2 = t2.next

            head = head.next
            curr += 1
        
        t1.next = d2.next
        t2.next = None
        
        return d1.next