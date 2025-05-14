#include <math.h>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> majorityElement(std::vector<int> &nums) {
    std::unordered_map<int, int> map;
    int ele = std::floor(nums.size() / 3);

    std::vector<int> ans;
    for (int i = 0; i < nums.size(); ++i) {
      if (map.count(nums[i])) {
        map[nums[i]]++;
        continue;
      };
      map[nums[i]] = 1;
    };

    for (auto x : map)
      if (x.second > ele)
        ans.push_back(x.first);

    return ans;
  }
};
