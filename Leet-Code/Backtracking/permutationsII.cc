#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> res;

  void backtrack(int start, std::vector<int> nums, std::vector<int> &perm,
                 std::vector<bool> &picks) {
    if (perm.size() == nums.size()) {
      auto it = std::find(res.begin(), res.end(), perm);
      if (it == res.end()) {
        res.push_back(perm);
        return;
      }
      return;
    };

    for (int i = 0; i < nums.size(); i++) {
      if (!picks[i]) {
        perm.push_back(nums[i]);
        picks[i] = true;
        backtrack(i, nums, perm, picks);
        perm.pop_back();
        picks[i] = false;
      }
    }
  };
  std::vector<std::vector<int>> permute(std::vector<int> &nums) {
    res.clear();
    std::vector<int> perm;
    std::vector<bool> picks(nums.size(),false);
    backtrack(0, nums, perm, picks);
    return res;
  };
};

int main() {

  Solution x;

  std::vector<int> nums = {1, 2,3};

  std::vector<std::vector<int>> res = x.permute(nums);

  for (auto x : res) {
    for (int y : x)
      std::cout << y;
    std::cout << std::endl;
  }
  return 0;
}
