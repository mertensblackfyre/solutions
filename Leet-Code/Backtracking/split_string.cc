#include <cmath>
#include <iostream>
#include <vector>

class Solution {

public:
  void backtrack(int i, int j, std::string s, std::vector<std::string> &perms) {

    if (j >= s.size()) {
      return;
    }

    std::string ss = s.substr(i, i + 1);

    perms.push_back(ss);
    std::cout << ss << std::endl;
    backtrack(i + 1, j + 1, s, perms);
    perms.pop_back();
    backtrack(i + 1, j + 1, s, perms);
  };

  bool splitString(std::string s) {

    std::vector<std::string> perms;
    backtrack(0, std::ceil(s.size() / 2), s, perms);
    // std::vector<int> perms;
    // backtrack(0, nums, perms, k);

    return true;
  };
};
int main() {

  Solution x;

  std::vector<int> nums = {1};
  std::string s = "0090089";
  x.splitString(s);
  // std::cout << x.beautifulSubsets(nums, 1) << std::endl;
  return 0;
}
