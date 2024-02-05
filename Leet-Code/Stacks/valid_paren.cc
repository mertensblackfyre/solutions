
#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  bool isValid(std::string s) {

    std::vector<char> saa;
    std::unordered_map<std::string, std::string> hash = {
        {")", "("},
        {"]", "["},
        {"}", "{"},

    };

    for (auto c : s) {
      for (auto p : hash) {
          if (saa.size() > 0 && saa[-1]) {
          
          }
        saa.push_back(c);
      }
    }

    return true;
  }
};

int main() {

  Solution x;

  std::string s = "()";
  x.isValid(s);

  return 0;
}
