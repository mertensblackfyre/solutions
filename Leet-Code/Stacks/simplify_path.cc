#include <iostream>
#include <vector>

class Solution {
public:
  std::string simplifyPath(std::string path) {

    std::vector<std::string> stack;
    std::string curr = "";

    for (auto s : path + "/") {

      if (s == '/') {
        if (curr == "..") {
          if (!stack.empty())
            stack.pop_back();
        } else if (!curr.empty() && curr != ".") {

          stack.push_back(curr);
        }
        curr.clear();
      } else {

        curr += s;
      }
    }

    std::string result = "/";
    for (int i = 0; i < stack.size(); ++i) {
      if (i > 0)
        result += "/";
      result += stack[i];
    }

    return result;
  }
};

int main() {

  Solution x;

  std::string s = "/home";
  std::string s1 = "/home/user/Documents/../Pictures";

  std::string s2 = "/home//foo/";
  std::string s3 = "/../";
  std::string s4 = "/.../a/../b/c/../d/./";

  std::string s5 = "/../abc//./def/";
  x.simplifyPath(s5);
}
