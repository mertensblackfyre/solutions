#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
class Solution {
public:
  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs) {

    std::vector<std::vector<std::string>> results;
    std::unordered_map<std::string, std::vector<std::string>> M;

    for (auto str : strs) {
      std::string word = str;
      std::sort(word.begin(), word.end());
      M[word].push_back(str);
    }

    for (auto v : M) {
      results.push_back(v.second);
    }

    return results;
  }
};
