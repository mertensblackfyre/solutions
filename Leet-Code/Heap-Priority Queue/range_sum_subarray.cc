
#include <algorithm>
#include <iostream>
#include <system_error>
#include <vector>
class Solution {
public:
  int sum_array(std::vector<int> &nums) {

    if (nums.empty())
      return 0;

    int sum = 0;
    for (int n : nums) {
      sum += n;
    };

    return sum;
  };

  void backtrack(int start, std::vector<int> nums, std::vector<int> &results,
                 std::vector<int> &sub) {

    if (start >= nums.size()) {
      int x = sum_array(sub);
      results.push_back(x);
      return;
    }

    sub.push_back(nums[start]);
    backtrack(start + 1, nums, results, sub);
    sub.pop_back();
    backtrack(start + 1, nums, results, sub);
  };
  int rangeSum(std::vector<int> &nums, int n, int left, int right) {
    std::vector<int> results;
    std::vector<int> sub;

    backtrack(0, nums, results, sub);

    std::sort(results.begin(), results.end());

    std::vector<int> sub_vector(results.begin() + left - 1,
                                results.begin() + right + 1);

    return sum_array(sub_vector);
  }
};

int main() {

  Solution x;

  int r = 5;
  int l = 1;
  int n = 4;
  std::vector<int> nums = {1, 2, 3, 4};
  std::cout << x.rangeSum(nums, n, l, r) << std::endl;
};
