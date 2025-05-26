#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <unordered_set>

class Solution {
public:
  int max_c = 0;
  void backtrack(int i, std::string s, std::string &str,
                 std::unordered_set<std::string> &set) {

    if (i >= s.size()) {
        max_c = std::max(max_c,2);
      return;
    }

    str.push_back(s[i]);

    if (set.count(str) == 0) {
      set.insert(str);
      str.clear();
      backtrack(i + 1, s, str, set);
      return;
    };

    backtrack(i + 1, s, str, set);
  };
  int maxUniqueSplit(std::string &s) {

    std::string str;
    std::unordered_set<std::string> set;
    backtrack(0, s, str, set);
    return set.size();
  }
};
int main() {

  Solution x;

  std::string nums = "wwwzfvedwfvhsww";
  int s = x.maxUniqueSplit(nums);
  std::cout << s << std::endl;
  return 0;
}
