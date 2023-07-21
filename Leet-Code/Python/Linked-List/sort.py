# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def sortList(self, head):
        arr = []
        dummy = ListNode()
        tail = dummy
        curr = head

        while curr:
            arr.append(curr.val)
            curr = curr.next

        for n in sorted(arr):
            node = ListNode()
            node.val = n
            tail.next = node
            tail = tail.next
        
        return dummy.next
        

