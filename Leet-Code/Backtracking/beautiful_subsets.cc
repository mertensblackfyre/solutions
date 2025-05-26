#include <iostream>
#include <ostream>
#include <vector>

class Solution {

public:
  int final = 0;

  bool print(std::vector<int> &perms, int k) {
    int i = 1;
    for (auto x : perms) {
      if (abs(x - perms[i]) == k) {
      }
    }

    std::cout << std::endl;
  };
  void backtrack(int i, std::vector<int> nums, std::vector<int> &perms, int k) {

    if (i >= nums.size()) {
      print(perms, k);
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

    return final;
  };
};
int main() {

  Solution x;

  std::vector<int> nums = {2, 4, 6};

  std::cout << x.beautifulSubsets(nums, 2) << std::endl;
  return 0;
}
