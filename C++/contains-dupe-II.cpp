#include <bits/stdc++.h> 
class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::map<int, int> hash_map;

        if (nums.size() == 1) return false;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (hash_map.count(nums[i]) > 0 && std::abs(int(i - hash_map[nums[i]])) <= k) return true;

            hash_map[nums[i]] = i;
        }
        return false;
    }
};