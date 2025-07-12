
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

class Solution {
public:
  bool carPooling(std::vector<std::vector<int>> &trips, int capacity) {

    int current_capcity = 0;
    std::priority_queue<std::pair<int, int>> pq;

    std::sort(trips.begin(), trips.end(),
              [](const std::vector<int> &a, const std::vector<int> &b) {
                return a[1] < b[1];
              });

    for (std::vector<int> trip : trips) {

      current_capcity += trip[0];

      if (current_capcity > capacity)
        return false;

      if (!pq.empty()) {
        if (pq.top().second == trip[1]) {
          current_capcity -= pq.top().first;
          pq.pop();
        };
      }
      pq.push({trip[0], trip[2]});
    };

    return true;
  };
};

int main() {

  Solution x;

  std::vector<std::vector<int>> trips3 = {{3, 2, 7}, {3, 7, 9}, {8, 3, 9}};
  std::vector<std::vector<int>> trips = {{2, 1, 5}, {3, 3, 7}};

  std::vector<std::vector<int>> trips1 = {{4, 1, 2}, {3, 2, 4}};

  x.carPooling(trips3, 11);
  // std::cout << x.carPooling(trips3, 11) << std::endl;

  return 0;
}
