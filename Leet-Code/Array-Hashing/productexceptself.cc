#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> productExceptSelf(std::vector<int> &nums) {
    std::vector<int> result(nums.size());
    int pre = 1;
    int post = 1;

    result[0] = pre;
    for (int i = 1; i < nums.size(); ++i) {
      pre *=  nums[i - 1];
      result[i] = pre;
    };

    result[nums.size() - 1] = post * result[nums.size() - 1];
    for (int i = nums.size() - 1; i >= 0; --i) {
      post *=  nums[i];
      result[i - 1] *= post;
    };

    return result;
  };
};

int main() {

  Solution test;

  std::vector<int> case1 = {1, 2, 3, 4};
  std::vector<int> case2 = {-1, 1, 0, -3, 3};
  test.productExceptSelf(case1);
}
