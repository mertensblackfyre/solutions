#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class Solution {
public:
  std::unordered_map<char, int> helper(std::string s) {

    std::unordered_map<char, int> M;

    for (size_t i = 0; i < s.size(); i++)
      M[s[i]]++;

    return M;
  }

  bool isAnagram(std::string s, std::string t) {

    return s.size() == t.size() && helper(s) == helper(t);
  }
};
