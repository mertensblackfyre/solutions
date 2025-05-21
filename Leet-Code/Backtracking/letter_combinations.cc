#include <iostream>
#include <unordered_map>
#include <vector>
class Solution {
public:
  std::unordered_map<int, std::string> hash = {
      {'2', "abc"}, {'3', "def"},  {'4', "ghi"}, {'5', "jkl"},
      {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"},
  };
  std::vector<std::string> results;
  std::vector<std::string> letterCombinations(std::string digits) {
    if (digits.empty())
      return results;

    std::string perms;
    backtrack(0, perms, digits);

    return results;
  }

  void backtrack(int i, std::string perms, std::string digits) {
    if (perms.size() == digits.size()) {
      results.push_back(perms);
      return;
    };

    for (auto c : hash[digits[i]])
      backtrack(i + 1, perms + c, digits);
  };
};

int main() {
  Solution x;
  std::vector<std::string> res = x.letterCombinations("23");
}

// NON LEGAL
