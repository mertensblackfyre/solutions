#include <vector>

class Solution {
public:
  std::vector<int> productExceptSelf(std::vector<int> &nums) {
    std::vector<int> pre(nums.size());

    int prefix = 1;
    int suffix = 1;

    pre[0] = prefix;
    for (int i = 1; i < nums.size(); ++i) {
      prefix *= nums[i - 1];
      pre[i] = prefix;
    };

    pre[nums.size() - 1] = suffix * pre[nums.size() - 1];
    for (int i = nums.size() - 1; i >= 0; --i) {
      suffix *= nums[i];
      pre[i - 1] = suffix * pre[i - 1];
    };
    return pre;
  };
};

int main() {

  Solution test;

  std::vector<int> case1 = {1, 2, 3, 4};
  std::vector<int> case2 = {-1, 1, 0, -3, 3};
  test.productExceptSelf(case1);
}
