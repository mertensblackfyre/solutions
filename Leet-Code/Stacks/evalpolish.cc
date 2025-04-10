#include <cctype>
#include <cmath>
#include <stack>
#include <string>
#include <vector>

class Solution {
public:
  int helper(std::stack<int> &stack, std::string operation, int ans) {

    if (operation == "+") {
      int s, f = 0;
      f = stack.top();
      stack.pop();

      s = stack.top();
      stack.pop();
      ans = s + f;
      return ans;
    }

    if (operation == "-") {
      int s, f = 0;
      f = stack.top();
      stack.pop();

      s = stack.top();
      stack.pop();

      ans = s - f;

      return ans;
    }

    if (operation == "*") {
      int s, f;
      f = stack.top();
      stack.pop();
      s = stack.top();
      stack.pop();
      ans = f * s;
      return ans;
    }

    if (operation == "/") {
      int s, f;
      f = stack.top();
      stack.pop();

      s = stack.top();
      stack.pop();

      ans = s / f;
      return ans;
    }

    return ans;
  };
  int evalRPN(std::vector<std::string> tokens) {

    int ans = 0;
    std::stack<int> stack;

    if (tokens.size() == 1) {
      int n;
      try {
        n = std::stoi(tokens[0]);
        stack.push(n);
      } catch (...) {
        return 0;
      }
      return n;
    }

    for (size_t i = 0; i < tokens.size(); i++) {
      int n;
      try {
        n = std::stoi(tokens[i]);
        stack.push(n);
      } catch (...) {
        ans = helper(stack, tokens[i], ans);
        stack.push(ans);
      }
    };
    return stack.top();
  };
};
int main() {

  Solution x;

  std::vector<std::string> s3 = {"0", "3", "/"};
  std::vector<std::string> s = {"2", "1", "+", "3", "*"};
  std::vector<std::string> s1 = {"4", "13", "5", "/", "+"};

  std::vector<std::string> s2 = {"10", "6", "9",  "3", "+", "-11", "*",
                                 "/",  "*", "17", "+", "5", "+"};
  x.evalRPN(s3);

  return 0;
}
