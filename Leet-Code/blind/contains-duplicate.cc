#include <iostream>
#include <unordered_set>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {

    std::unordered_set<int> S;

    for (size_t i = 0; i < nums.size(); i++) {

      if (S.find(nums[i]) != S.end()) {
        return true;
      }

      S.insert(nums[i]);
    }

    return false;
  }
};

