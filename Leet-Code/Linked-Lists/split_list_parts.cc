class Solution {
public:
  int lsize_(ListNode *head) {
    int count = 0;

    while (head) {
      count++;
      head = head->next;
    }
    return count;
  };
  vector<ListNode *> splitListToParts(ListNode *head, int k) {
    ListNode *ll = head;

    ListNode *tmp = ll;
    std::vector<ListNode *> results;

    int lsize = lsize_(head);

    int rsize = std::floor(lsize / k);
    int mosize = lsize % k;

    std::cout << rsize << mosize << std::endl;

    for (int i = 0; i < mosize; i++) {
      int c = 0;

      results.push_back(tmp);
      ll = tmp;
      while (ll && c != rsize) {

        c++;
        ll = ll->next;
      };

      if (ll) {
        tmp = ll->next;
        ll->next = nullptr;
      }
    };

    for (int i = 0; i < k - mosize; i++) {
      int c = 0;

      results.push_back(tmp);
      ll = tmp;
      while (ll && c != rsize - 1) {
        c++;
        ll = ll->next;
      };

      if (ll) {
        tmp = ll->next;
        ll->next = nullptr;
      }
    };

    return results;
  };
};
