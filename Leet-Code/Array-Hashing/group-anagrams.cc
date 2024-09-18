#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs) {
    std::unordered_map<std::string, std::vector<std::string>> table;
    std::vector<std::vector<std::string>> results;

    for (std::string s : strs) {
      std::string ss = s;
      std::string sm = s;
      std::sort(sm.begin(), sm.end());
      std::sort(ss.begin(), ss.end());
      if (ss == sm)
        table[ss].push_back(s);
    };

    for (auto t : table) {
      results.push_back(t.second);
    };

    return results;
  };
};
int main() {

  Solution a;
  std::vector<std::string> case1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
  a.groupAnagrams(case1);
}
