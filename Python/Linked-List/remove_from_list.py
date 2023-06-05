# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def removeElements(head, val):
        current = head

        while head and head.val == val:
            head = head.next

        while current and current.next:
            while current.next and current.next.val == val:
                 current.next = current.next.next

            current = current.next

        return head
