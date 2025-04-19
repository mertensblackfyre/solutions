class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    ListNode *prev = NULL;
    ListNode *curr = NULL;
    ListNode *tmp = head;

    while (tmp) {
      curr = tmp;
      tmp = tmp->next;
      curr->next = prev;
      prev = curr;
    };

    return curr;
  };
  void reorderList(ListNode *head) {

    if (!head || !head->next)
      return;

    ListNode *l1 = head;
    ListNode *l2 = head->next;

    while (l2 && l2->next) {
      l1 = l1->next;
      l2 = l2->next->next;
    };

    l2 = l1->next;
    l1->next = nullptr;

    l2 = reverseList(l2);
    ListNode *first = head;

    while (first && l2) {

      ListNode *tmp1 = first->next;
      ListNode *tmp2 = l2->next;

      first->next = l2;
      l2->next = tmp1;
      first = tmp1;
      l2 = tmp2;
    }
  }
};
