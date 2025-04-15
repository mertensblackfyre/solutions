#include <cctype>
#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  std::string decodeString(std::string s) {

    std::string res = "";
    std::vector<int> stack;

    std::string curr = "";
    for (size_t i = 0; i < s.size(); i++) {

      if (std::isdigit(s[i])) {
        int n = s[i] - '0';
        stack.push_back(n);
      } else if (isalpha(s[i])) {
        while (isalpha(s[i])) {
          curr += s[i];
          i++;
        }
        int x = stack.back();
        while (x > 0) {
          res += curr;
          x--;
        }
       stack.pop_back();
        //std::cout << curr << std::endl;
        curr.clear();
        continue;

      } else {
        continue;
      }
    }

    std::cout << res << std::endl;
    return "";
  }
};

int main() {

  Solution x;

  std::string s = "3[a]2[bc]";
  std::string s1 = "3[a2[c]]";
  x.decodeString(s1);
}
