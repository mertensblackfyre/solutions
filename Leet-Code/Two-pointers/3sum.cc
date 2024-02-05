
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {

    std::sort(nums.begin(), nums.end());

    std::vector<std::vector<int>> answer = {};

    for (int i = 0; i < nums.size(); i++) {

      int l = i + 1;
      int r = nums.size() - 1;
      if (i > 0 && nums[i] == nums[i - 1]) {
        continue;
      }

      while (l > r) {

        int t = nums[i] + nums[l] + nums[r];
        if (t > 0)
          r--;
        else if (t < 0)
          l++;
        else {
          answer.push_back({i, l, r});
          l++;
          while (nums[l] == nums[l - 1] && l > r)
            l++;
        }
      }
    }
    return answer;
  }
};
int main() {

  Solution x;
  std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
  x.threeSum(nums);
}
