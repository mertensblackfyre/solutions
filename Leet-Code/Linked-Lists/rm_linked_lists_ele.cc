class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* next;
        ListNode* prev = head;

        if (head && head->next)
            next = head->next;

        while (head && head->val == val) {
            if (head->next == NULL) {
                head = NULL;
                continue;
            }
            head = head->next;
        }

        while (prev && next) {
            if (next->val == val) {
                prev->next = next->next;
                if (next->next && next->next->val != val)
                    prev = next;
                next = next->next;
                continue;
            };
            prev = prev->next;
            next = next->next;
        }

        return head;
    }
};
