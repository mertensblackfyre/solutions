#include <algorithm>
#include <cctype>
#include <iostream>

class Solution {
public:
  bool isPalindrome(std::string s) {

    int count = 0;
    std::string n_str;

    for (char c : s) {
      if (isalnum(c))
        n_str += c;
    }

    for (int i = 0; i < n_str.size(); ++i) {
      char slow = std::tolower(n_str[i]);
      char fast = std::tolower(n_str[n_str.size() - i - 1]);
      if (slow == fast) {
        count++;
      }
    }

    std::cout << count << n_str.size() << std::endl;
    return count == n_str.size();
  }
};

int main() {

  Solution p;
  std::string case_one_s = "A man, a plan, a canal: Panama";
  std::string case_two_s = "race a car";

  p.isPalindrome(case_one_s);
}
