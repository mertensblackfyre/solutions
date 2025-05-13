#include <algorithm>
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
      start++;
      return;
    }

    for (int i = start; i < nums.size(); i++) {
      perm.push_back(nums[i]);
      backtrack(i+1, nums, target, perm);
      perm.pop_back();
    }
  };
  std::vector<std::vector<int>> combinationSum2(std::vector<int> &candidates,
                                                int target) {
    res.clear();
    std::vector<int> perm;
    std::sort(candidates.begin(),candidates.end());
    backtrack(0, candidates, target, perm);
    return res;
  };
};
int main() {

  Solution x;

  int target = 8;
  std::vector<int> nums = {10, 1, 2, 7, 6, 1, 5};

  std::vector<std::vector<int>> res = x.combinationSum2(nums, target);

  for (auto x : res) {
    for (int y : x)
      std::cout << y;
    std::cout << std::endl;
  }
  return 0;
}
