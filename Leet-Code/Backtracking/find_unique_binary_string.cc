#include <iostream>
#include <ostream>
#include <string>
#include <unordered_set>
#include <vector>

class Solution {
public:
  std::string final = "";

  void backtrack(int i, std::vector<std::string> nums, std::string &str,
                 std::unordered_set<std::string> set) {

    if (!set.contains(str)) {
      final = str;
      return;
    };

    str[i] = (str[i] == '0') ? '1' : '0';
    backtrack(i + 1, nums, str, set);
  };
  std::string findDifferentBinaryString(std::vector<std::string> &nums) {

    std::unordered_set<std::string> set(nums.begin(), nums.end());

    backtrack(0, nums, nums[0], set);

    return final;
  }
};
int main() {

  Solution x;

  std::vector<std::string> nums = {"0"};
  std::cout << x.findDifferentBinaryString(nums) << std::endl;

  return 0;
}
