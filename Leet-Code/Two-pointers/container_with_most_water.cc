#include <algorithm>
#include <iostream>
#include <vector>
class Solution {

public:
  Solution() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
  }
  int maxArea(std::vector<int> &height) {

    int res = 0;
    int p1 = 0;
    int p2 = height.size() - 1;

    while (p1 < p2) {
      int area = (p2 - p1) * std::min(height[p1], height[p2]);
      if (height[p2] > height[p1]) {
        p1++;
      } else {
        p2--;
      }
      res = std::max(res, area);
    }
    return res;
  }
};

int main() {

  Solution p;
  std::vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  p.maxArea(nums);
}
