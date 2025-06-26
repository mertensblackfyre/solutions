
#include <cmath>
#include <queue>
#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>> &points,
                                         int k) {
    std::priority_queue<std::pair<int, std::pair<int, int>>> pq;

    std::vector<std::vector<int>> results;

    for (auto &n : points) {
      int x = std::pow(n[0] - 0, 2);
      int y = std::pow(n[1] - 0, 2);
      int num = x + y;
      pq.push({num, {n[0], n[1]}});
      if (pq.size() > k)
        pq.pop();
    };

    while (k != 0) {
      results.push_back({pq.top().second.first, pq.top().second.second});
      pq.pop();
      k--;
    };

    return results;
  }
};
int main() {}
