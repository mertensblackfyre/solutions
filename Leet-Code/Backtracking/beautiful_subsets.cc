#include <iostream>
#include <ostream>
#include <vector>

class Solution {

public:
  int final = 0;

  bool print(std::vector<int> &perms, int k) {
    for (int i = 0; i < perms.size(); ++i) {
      for (int j = i + 1; j < perms.size(); j++) {
        if (abs(perms[i] - perms[j]) == k)
          return false;
      };
    };

    return true;
  };
  void backtrack(int i, std::vector<int> nums, std::vector<int> &perms, int k) {

    if (i >= nums.size()) {
      if (perms.size() < 2) {
        final++;
        return;
      }
      if (print(perms, k))
        final++;

      return;
    };

    perms.push_back(nums[i]);
    backtrack(i + 1, nums, perms, k);
    perms.pop_back();
    backtrack(i + 1, nums, perms, k);
  }

  int beautifulSubsets(std::vector<int> &nums, int k) {

    std::vector<int> perms;
    backtrack(0, nums, perms, k);

    return final - 1;
  };
};
int main() {

  Solution x;

  std::vector<int> nums = {1};

  std::cout << x.beautifulSubsets(nums, 1) << std::endl;
  return 0;
}
