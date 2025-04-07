
#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>

class Solution {
public:
  bool isValid(std::string s) {

    std::stack<char> stack;
    std::unordered_map<char, char> hash = {
        {')', '('},
        {']', '['},
        {'}', '{'},
    };

    for (auto c : s) {

      if (stack.top() == hash[c]) {
        stack.pop();
      } else {
        stack.push(c);
      }
    }
    return stack.empty();
  };
};

int main() {

  Solution x;

  std::string s = "(}";
  x.isValid(s);

  return 0;
}
