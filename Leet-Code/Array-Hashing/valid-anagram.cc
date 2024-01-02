#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::unordered_map<char,char> helper(std::string s) {
    std::unordered_map<char,char> hash;
    for (int i = 0; i < s.size(); ++i)
      hash[s[i]]++;
    return hash;
  }
  
  bool isAnagram(std::string s, std::string t) {
    if (s.size() != t.size())
      return false;

    return helper(s) == helper(t);
  }
};
int main() {

  Solution test;
  std::string case_one_s = "anagram";
  std::string case_one_t = "nagaram";
  std::string case_two_s = "rat";
  std::string case_two_t = "car";

  test.isAnagram(case_one_s, case_one_t);
}
