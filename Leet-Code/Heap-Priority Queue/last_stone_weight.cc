#include <iostream>
#include <queue>
#include <vector>

class Solution {
public:
  int lastStoneWeight(std::vector<int> &stones) {
    std::priority_queue<int> pq;

    for (int nums : stones) {
      pq.push(nums);
    };
    while (!pq.empty()) {
      int x, y;
      if (pq.size() >= 2) {
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
      } else {
        break;
      }

      if (x == y)
        continue;

      if (x != y) {
        y = abs(y - x);
        pq.push(y);
      };
    };

    if (pq.empty()) {
      return 0;
    }
    return pq.top();
  }
};
int main() {
  Solution x;

  std::vector<int> stones = {2, 2};
  int a = x.lastStoneWeight(stones);
  std::cout << a << std::endl;
}
