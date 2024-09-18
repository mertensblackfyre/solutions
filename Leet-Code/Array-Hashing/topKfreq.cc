#include <unordered_map>
#include <vector>

class Solution {
public:
  int find_key(std::unordered_map<int, int> map, int nx) {
    for (auto a : map) {
      if (nx == a.second) {
        return a.first;
      }
    }
    return 0;
  };
  std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
    std::vector<int> ans;
    std::unordered_map<int, int> hash;

    for (int n : nums) {
      if (hash.count(n) == 0)
        hash[n] = 0;
      hash[n]++;
    }

    while (ans.size() != k) {
      int max = 0;
      std::unordered_map<int, int>::iterator it;
      for (it = hash.begin(); it != hash.end(); it++) {
        if (it->second > max) {
          max = it->second;
        }
      }
      int q = find_key(hash, max);
      ans.push_back(q);
      auto iter = hash.find(q);
      if (iter != hash.end()) {
        hash.erase(iter);
      }
    }
    return ans;
  };
};
