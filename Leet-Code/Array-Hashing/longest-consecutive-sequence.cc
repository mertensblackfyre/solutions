#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  int longestConsecutive(std::vector<int> &nums) {

    int ans = 0;
    std::sort(nums.begin(), nums.end());

    for (int k = 0; k < nums.size(); ++k) {
      if (nums[k + 1] == nums[k] + 1 || nums[k + 1] == nums[k]) {
        ans++;
      } else {
        break;
      }
    };

    std::cout << "ANS->" << ans << std::endl;
    return ans;
  };
};

int main() {

  Solution a;
  std::vector<int> case1 = {100, 4, 200, 1, 3, 2};
  std::vector<int> case2 = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  std::vector<int> case3 = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
  a.longestConsecutive(case2);
  a.longestConsecutive(case1);
}
