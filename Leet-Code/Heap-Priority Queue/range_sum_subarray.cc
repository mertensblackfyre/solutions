#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  const int MOD = 1e9 + 7;
  int sum_array(std::vector<int> &nums) {

    if (nums.empty())
      return 0;

    int sum = 0;
    for (int n : nums) {
      sum += n;
    };

    return sum % MOD;
  };

  int rangeSum(std::vector<int> &nums, int n, int left, int right) {
    std::vector<int> results;
    std::vector<int> sub;

    for (size_t i = 0; i < n; i++) {
      int cur = 0;
      for (size_t j = i; j < n; j++) {
        cur = cur + nums[j] % MOD;
        sub.push_back(cur);
      }
    }
    std::sort(sub.begin(), sub.end());

    std::vector<int> sub_vector(sub.begin() + left - 1, sub.begin() + right);

    return sum_array(sub_vector);
  }
};

int main() {

  Solution x;

  int r = 5;
  int l = 1;
  int n = 4;
  std::vector<int> nums = {1, 2, 3, 4};
  // x.rangeSum(nums, n, l, r);
  std::cout << x.rangeSum(nums, n, l, r) << std::endl;
  // std::cout << x.rangeSum(nums, n, l, r) << std::endl;
};
