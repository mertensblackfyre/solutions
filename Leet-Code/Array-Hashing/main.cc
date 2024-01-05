#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::unordered_map<char, int> helper(std::string s) {
    std::unordered_map<char, int> hash;
    for (int i = 0; i < s.size(); ++i)
      hash[s[i]]++;

    return hash;
  };

  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs) {

    std::vector<std::vector<std::string>> ans;
    std::unordered_map<std::string, std::vector<std::string>> hash;

    for (std::string strx : strs) {
      std::sort(strx.begin(), strx.end());
      hash[strx] = {};
      for (std::string str : strs) {
        if (helper(strx) == helper(str)) {
          hash[strx].push_back(str);
        }
      }
    }

    for (auto str : hash) {
      ans.push_back(str.second);
    }

    return ans;
  }
};
int main() {

  Solution a;
  // std::vector<int> case1 = {100, 4, 200, 1, 3, 2};
  std::vector<std::string> case1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
  std::vector<int> case2 = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  std::vector<int> case3 = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
  a.groupAnagrams(case1);
}
