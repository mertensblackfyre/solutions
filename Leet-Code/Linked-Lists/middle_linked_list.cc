class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (slow && fast &&fast->next) {
            if (!fast->next)
                return slow;

            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
