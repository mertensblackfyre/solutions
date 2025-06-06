#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> res;
  int vector_sum(std::vector<int> nums) {
    int sum = 0;
    for (int x : nums)
      sum += x;
    return sum;
  };

  void backtrack(int start, std::vector<int> nums, int target,
                 std::vector<int> &perm) {

    int sum = vector_sum(perm);
    if (sum == target) {
      res.push_back(perm);
      return;
    };
    if (sum > target) {
      start--;
      return;
    }
    for (int i = start; i < nums.size(); i++) {
      perm.push_back(nums[i]);
      backtrack(i, nums, target, perm);
      perm.pop_back();
    }
  };
  std::vector<std::vector<int>> combinationSum(std::vector<int> &candidates,
                                               int target) {
    res.clear();
    std::vector<int> perm;
    backtrack(0, candidates, target, perm);
    return res;
  };
};
int main() {

  Solution x;

  int target = 8;
  std::vector<int> nums = {2, 3, 5};

  std::vector<std::vector<int>> res = x.combinationSum(nums, target);

  for (auto x : res) {
    for (int y : x) {
      std::cout << y;
    }
    std::cout << std::endl;
  }
  return 0;
}
