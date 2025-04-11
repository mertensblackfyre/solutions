#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  std::string simplifyPath(std::string path) {

    std::vector<std::string> stack;
    std::string ans = "";
    std::string str = "";

    if (path[path.size() - 1] == '/') {
      path[path.size() - 1] = '\0';
    };

    if (path == "/../") {
      std::cout << "/" << std::endl;
      return "/";
    }

    for (size_t i = 0; i < path.size(); i++) {
      if (path[i] == '/') {
        if (str == "..") {
          stack.pop_back();
          str.clear();
          continue;
        };
        if (str == "...") {
          stack.push_back(str);
          str.clear();
          continue;
        };

        stack.push_back(str);
        str.clear();
        continue;
      }
      str += path[i];
    };

    //  std::cout << str << std::endl;

    if (str != ".") {

      stack.push_back(str);
    }
    for (std::string x : stack) {

      std::cout << x << std::endl;
    }
    // std::cout << std::endl;
    return "";
  }
};

int main() {

  Solution x;

  std::string s = "/home";
  std::string s1 = "/home/user/Documents/../Pictures";

  std::string s2 = "/home//foo/";
  std::string s3 = "/../";
  std::string s4 = "/.../a/../b/c/../d/./";
  x.simplifyPath(s4);
}
