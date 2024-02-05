#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> productExceptSelf(std::vector<int> &nums) {

    std::vector<int> result;

    int ignore = 0;
    int product = 1;

    for (int i = 1; ignore < nums.size(); i++) {

      if (result.size() == nums.size())
        break;

      if (i == nums.size()) {
        i = 0;
        ignore++;
        result.push_back(product);
        product = 1;
      }

      if (i == ignore)
        continue;

      product *= nums[i];
    }

    for (int i = 0; i < result.size(); ++i) {
      std::cout << result[i] << std::endl;
    }

    return result;
  }
};

int main() {

  Solution test;

  std::vector<int> case1 = {1, 2, 3, 4};
  std::vector<int> case2 = {-1, 1, 0, -3, 3};
  test.productExceptSelf(case2);
}
