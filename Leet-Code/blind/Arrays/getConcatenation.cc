#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> getConcatenation(std::vector<int> &nums) {

    std::vector<int> ans;
    ans.insert(ans.end(), nums.begin(), nums.end());
    ans.insert(ans.end(), nums.begin(), nums.end());
    return ans;
  }
};

