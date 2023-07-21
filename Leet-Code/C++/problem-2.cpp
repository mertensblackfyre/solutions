#include <iostream>
/**
Definition for singly-linked list.
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0; 
        ListNode *exp;
        while (l1->next != nullptr && l2->next != nullptr)
        {
            sum = l1->val + l2->val;
            std::cout << sum << "\n";  
            l1 = l1->next;
            l2 = l2->next;
        }
        return l1;
    }
};

int main()
{
    Solution r;
    // ListNode *l1;
    

    return 0;
}