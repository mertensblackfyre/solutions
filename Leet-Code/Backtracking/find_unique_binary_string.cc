#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

class Solution {
public:
  std::string final = "";
  std::string vector_combine(std::vector<std::string> s) {

    std::string str;
    for (auto r : s)
      str += r;

    return str;
  };

  void backtrack(std::vector<bool> &pick, std::string combined_str,
                 std::vector<std::string> nums, std::string &perm_str) {

    if (perm_str.size() == nums.size()) {
      auto it = std::find(nums.begin(), nums.end(), perm_str);
      if (it == nums.end()) {
        final = perm_str;
      }

      return;
    };

    for (size_t i = 0; i < combined_str.size(); i++) {

      if (!pick[i]) {
        pick[i] = true;
        perm_str.push_back(combined_str[i]);
        backtrack(pick, combined_str, nums, perm_str);
        pick[i] = false;
        perm_str.pop_back();
      }
    }
  };
  std::string findDifferentBinaryString(std::vector<std::string> &nums) {
    std::string perm_str;
    std::string combined_str = vector_combine(nums);
    std::vector<bool> pick(combined_str.size(), false);
    backtrack(pick, combined_str, nums, perm_str);

    if (final == "" && nums[0] == "0") {
      return "1";
    } else {
      return "0";
    }

    return final;
  }
};
int main() {

  Solution x;

  std::vector<std::string> nums = {"0"};
  std::cout << x.findDifferentBinaryString(nums) << std::endl;

  return 0;
}
