#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> topKFrequent(std::vector<int> &nums, int k) {

    std::vector<int> ans;
    std::unordered_map<int, int> hash;
    std::vector<std::vector<int>> temp(nums.size() + 1);

    for (size_t i = 0; i < nums.size(); i++)
      hash[nums[i]]++;

    for (auto it : hash)
      temp[it.second].push_back(it.first);

    for (size_t i = nums.size(); i >= 0;i--) {
      if (ans.size() >= k)
        break;

      if (!temp[i].empty()) 
        ans.insert(ans.end(), temp[i].begin(), temp[i].end());
      
    }

    for (int n : ans) {
      std::cout << n << std::endl;
    }
    return ans;
  }
};

int main() {

  Solution test;

  std::vector<int> case1 = {-1, -1};
  std::vector<int> case2 = {1, 1, 1, 2, 2, 3};
  int k = 1;

  test.topKFrequent(case1, k);
}
