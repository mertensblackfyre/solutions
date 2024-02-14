class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        while (curr1->next != NULL && curr2->next != NULL) {
            if (curr1->val == curr2->val) {
                curr1 = curr1->next;
                curr1->next = curr2;

            } else if (curr1->val < curr2->val) {
                curr2 = curr2->next;
                curr2->next = curr1; 
                
            } else {
                curr2 = curr2->next;
            }

        }
        return head;
    }
};