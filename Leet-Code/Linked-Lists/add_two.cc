class Solution {
public:
    Solution() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;
        int extra = 0;

        while (l1 && l2) {
            int num = l1->val + l2->val + extra;
            extra = num / 10;
            ListNode* node = new ListNode(num % 10);
            tail->next = node;

            tail = tail->next;

            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1) {
            int num = l1->val + extra;
            ListNode* node = new ListNode(num % 10);

            extra = num / 10;

            tail->next = node;
            tail = tail->next;
            l1 = l1->next;
        }
        while (l2) {
            int num = l2->val + extra;
            ListNode* node = new ListNode(num % 10);

            extra = num / 10;

            tail->next = node;
            tail = tail->next;
            l2 = l2->next;
        }
        if (extra == 1) {
            ListNode* node = new ListNode(extra);
            tail->next = node;
        }

        return dummy->next;
    };
};
