
#include <cmath>
#include <queue>
#include <vector>
class Solution {
public:
  long long pickGifts(std::vector<int> &gifts, int k) {
    std::priority_queue<int> pq;

    for (int nums : gifts)
      pq.push(nums);

    for (int i = 0; i < k; i++) {
      int top = pq.top();
      top = sqrt(top);
      pq.pop();
      pq.push(top);
    };

    long long sum = 0;

    while (!pq.empty()) {
      sum += pq.top();
      pq.pop();
    };

    return sum;
  }
};
int main() {

  Solution x;

  return 0;
}
