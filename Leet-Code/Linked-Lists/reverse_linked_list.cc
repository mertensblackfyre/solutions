class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while (head != NULL && head->next != NULL) {
            head = head->next;
            curr->next = prev;
            prev = curr;
            curr = head;
        };

        if(head != NULL &&head->next == NULL)
            head->next = prev;

        return head;
    }
};
