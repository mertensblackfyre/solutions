#include <algorithm>
#include <vector>

class Solution {

public:
  int maxArea(std::vector<int> height) {

    int max = 0;
    int p1 = 0;
    int p2 = height.size() - 1;

    while (p1 < p2) {
      int area = (p2 - p1) * std::min(height[p1], height[p2]);
      if (height[p1] > height[p2]) {
        p2--;
      } else {
        p1++;
      }

      max = std::max(max, area);
    };

    return max;
  };
};

int main() {

  Solution p;
  std::vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};

  std::vector<int> nums1 = {1, 2, 1};
  p.maxArea(nums1);
};
