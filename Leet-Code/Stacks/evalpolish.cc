
#include <cctype>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

class Solution {
public:
  int evalRPN(std::vector<std::string> tokens) {

    int ans = 0;
    std::stack<int> stack;

    for (size_t i = 0; i < tokens.size() - 1; i++) {
      int n = std::stoi(tokens[i]);
      if (std::isdigit(n)) {
        stack.push(n);
      } else {
        if (tokens[i] == "+") {
          while (!stack.empty()) {
            ans += stack.top();
            stack.pop();
          }
        }
 if (tokens[i] == "*") {
          while (!stack.empty()) {
            ans *= stack.top();
            stack.pop();
          }
        }
      }

      return 0;
    };
  };
  int main() {

    Solution x;

    std::vector<std::string> s = {"2", "1", "+", "3", "*"};
    x.evalRPN(s);

    return 0;
  }
