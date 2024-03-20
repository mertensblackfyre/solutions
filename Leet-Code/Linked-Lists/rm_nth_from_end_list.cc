
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        std::vector<int> arr;
        ListNode* tmp = head;
        while (tmp != NULL) {
            arr.push_back(tmp->val);
            tmp = tmp->next;
        };

        int index = arr.size() - n;
        int cursor = 0;

        ListNode* curr;

        if (head->next)
            curr = head->next;

        ListNode* prev = head;


        if(index == 0)
            return curr;


        while (prev && curr && cursor + 1 != index) {
            prev = prev->next;
            curr = curr->next;
            cursor++;
        }

        if(curr && curr->next)
            prev->next = curr->next;

        if(curr &&!curr->next)
            prev->next = NULL;

        return head;
    }
};
