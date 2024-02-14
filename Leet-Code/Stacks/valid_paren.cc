
#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>

class Solution {
public:
  bool isValid(std::string s) {

    std::stack<char> saa;
    std::unordered_map<char, char> hash = {
        {')', '('},
        {']', '['},
        {'}', '{'},
    };

    for (auto c : s) {
      if (saa.size() != 0 && hash[c] == saa.top()) {
        saa.pop();
        continue;
      }
      saa.push(c);
    }

    return saa.empty();
  }
};

int main() {

  Solution x;

  std::string s = "(}";
  x.isValid(s);

  return 0;
}
