#include <iostream>
#include <stack>
#include <vector>

class Solution {
public:
  std::string stacktostr(std::stack<char> stack) {

    std::string str = "";

    while (!stack.empty()) {

      str += stack.top();
      stack.pop();
    };

    return str;
  };
  std::string simplifyPath(std::string path) {

    std::string ans = "";
    std::vector<std::string> stack;

    std::string str = "";
    if (path == "/../") {

      std::cout << "/" << std::endl;
      return "/";
    }

    for (size_t i = 0; i < path.size(); i++) {

      if (str == "/.../") {
        stack.push_back(str);
        str = "";
        continue;
      };
      if (str[str.size()] == '/') {
        stack.push_back(str);
        str = "";
        continue;
      }
      str += path[i];
    }
    /*
        for (size_t i = 0; i < path.size(); i++) {

          if (path[i] == '.' && path[i + 1] == '.' && path[i + 2] == '.') {
            str += '.';
            str += '.';
            str += '.';
            if (path[i + 3])
              i = i + 3;
            str = "";
            continue;
          }

          if (path[i] == '.' && path[i + 1] == '/') {
            str = "";
            i = i + 2;
            continue;
          }
          if (path[i] == '/' && path[i + 1] == '/') {
            str += path[i];
            i = i + 1;
            continue;
          }
          if (path[i] == '.' && path[i + 1] == '.' && path[i + 2] == '/') {
            stack.pop_back();
            if (path[i + 2])
              i = i + 2;
            continue;
          }
          if (path[i] == '/' && i + 1 != path.size() - 1) {
            str += path[i];
            stack.push_back(str);
            str = "";
            continue;
          }

          str += path[i];
        }
    */
    stack.push_back(str);

    for (auto x : stack) {
      // ans += x;

      std::cout << x;
    }
    /*
    if (ans[ans.size() - 1] == '/') {
      ans[ans.size() - 1] = '\0';
    }
    */

    std::cout << std::endl;
    // std::cout << stack[stack.size()-1] << std::endl;
    return "";
  }
};

int main() {

  Solution x;

  std::string s = "/home";
  std::string s1 = "/home/user/Documents/../Pictures";

  std::string s2 = "/home//foo";
  std::string s3 = "/../";
  std::string s4 = "/.../a/../b/c/../d/./";
  x.simplifyPath(s4);
}
