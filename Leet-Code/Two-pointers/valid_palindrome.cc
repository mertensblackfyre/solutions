#include <algorithm>
#include <cctype>
#include <iostream>

class Solution {
public:
  bool isPalindrome(std::string s) {

    std::string rev_str = s;
    std::string new_str;

    for (char ss : s)
      if (isalnum(ss))
        new_str += (char)tolower(ss);

    std::reverse(rev_str.begin(), rev_str.end());
    return new_str == rev_str;
  };
};

int main() {

  Solution p;
  std::string case_one_s = "A man, a plan, a canal: Panama";
  std::string case_two_s = "race a car";

  p.isPalindrome(case_one_s);
}
