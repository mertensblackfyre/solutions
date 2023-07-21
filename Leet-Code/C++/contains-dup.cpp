#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
          std::unordered_set<int> hashset;
          for (int key : nums)
          {
            if(hashset.count(key) > 0) return true;
            hashset.insert(key);
          }
          return false;
    }
};

