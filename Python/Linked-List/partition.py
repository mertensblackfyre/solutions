class Solution(object):
    def partition(self, head, x):
        arr1 = []
        arr2 = []
        dummy = ListNode()
        tail = dummy
        curr = head

        while curr:
            if curr.val < x:
                arr1.append(curr.val)
            else:
                arr2.append(curr.val)
            curr = curr.next

        for n in arr1+arr2:
            node = ListNode()
            node.val = n
            tail.next = node
            tail = tail.next
        
        return dummy.next