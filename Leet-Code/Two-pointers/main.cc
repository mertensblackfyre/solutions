#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {

    std::vector<int> arr;
    std::unordered_map<int, int> hash;

    for (size_t i = 0; i < nums.size(); i++) {
      int diff = target - nums[i];
      if (hash.count(diff)) {
        arr.push_back(i + 1);
        arr.push_back(hash[diff]);
      } else {
        hash[nums[i]] = i;
      }
    }
    return arr;
  }
};

int main() {

  Solution p;
  std::vector<int> nums = {2, 7, 11, 15};

  std::vector<int> nums1 = {2, 1, 5, 3};
  // std::string case_one_s = "A man, a plan, a canal: Panama";
  // std::string case_two_s = "race a car";

  p.twoSum(nums1, 4);
};
