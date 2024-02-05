#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {

    std::unordered_map<int, int> table;

    for (int n : nums) {
      if (table.count(n)) 
        return true;

      table[n]++;
    }

    return false;
  }
};

int main() {

  Solution test;

  std::vector<int> case_one = {1, 2, 3, 1};
  std::vector<int> case_two = {1, 2, 3, 4};
  std::vector<int> case_three = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

  test.containsDuplicate(case_three);
}
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
