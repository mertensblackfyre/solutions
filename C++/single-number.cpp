#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) 
    {
        int x = 0;
        int ans = nums[nums.size() - 1];
        std::sort(nums.begin(),nums.end());
        for (std::size_t i = 0; i < nums.size(); ++i)
        {
            for (std::size_t j = i + 1; j < nums.size(); ++j)
            {
                if (nums[i] == nums[j]) x++;
                else if (nums[i] != nums[j] && x == 0) ans = nums[i];
                else x = 0;
            }
        }
        
        return ans;
    };
};