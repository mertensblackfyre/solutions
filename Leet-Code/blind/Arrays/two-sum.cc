

#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {

    std::vector<int> array = {};
    for (size_t i = 0; i < nums.size(); i++) {
      for (size_t j = i + 1; j < nums.size(); j++) {

        if (nums[i] + nums[j] == target) {
            array.push_back(i);
            array.push_back(j);
        }
      }
    }

    return array;
  }
};
