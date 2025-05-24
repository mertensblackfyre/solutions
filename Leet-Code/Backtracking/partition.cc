#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  std::vector<std::vector<std::string>> res;

  bool check_str(std::string input) {
    std::string reversed_str = input;
    std::reverse(reversed_str.begin(), reversed_str.end());
    return reversed_str == input;
  };
  void backtrack(int i, std::string s, std::vector<std::string> &perm) {

    if (i >= s.size()) {
      res.push_back(perm);
      return;
    }

    for (size_t j = i; j < s.length(); j++) {
      std::string sub = s.substr(i, j - i + 1);
      if (check_str(sub)) {
        perm.push_back(sub);
        backtrack(j + 1, s, perm);
        perm.pop_back();
      }
    }
  };

  std::vector<std::vector<std::string>> partition(std::string s) {
    std::vector<std::string> perm;
    backtrack(0, s, perm);

    return res;
  };
};

int main() {

  Solution x;

  std::string tiles = "aab";
  std::vector<std::vector<std::string>> res = x.partition(tiles);


  return 0;
}

// NOT LEGAL
