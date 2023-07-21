#include <algorithm>
#include <iostream>
#include <ctype.h>

class Solution {
public:

  static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(),
                         [](unsigned char ch) { return !std::isspace(ch); })
                .base(),
            s.end());
  }

  static inline std::string rtrim_copy(std::string s) {
    rtrim(s);
    return s;
  }

  int lengthOfLastWord(std::string s) {

    int len = -1;
    s = rtrim_copy(s);

    for (size_t i = s.size(); i > 0; i--) {
        if(!isspace(s[i])) len++;
        else break;
    }
    std::cout << len;
    return len;
  }
};


int main(){
    Solution x;
    x.lengthOfLastWord("  fly me   to   the moon");
}
