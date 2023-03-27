#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> ans;
        std::sort(nums1.begin(),nums1.end());
        std::sort(nums2.begin(),nums2.end());

        for (size_t i = 0; i < nums2.size(); i++)
            for (size_t j = 0; j < nums1.size(); j++)
                if(nums2[i] == nums1[j]) ans.push_back(nums1[j]);

        auto it = std::unique(ans.begin(),ans.end());
        ans.resize(std::distance(ans.begin(), it));
        
        return ans;
    }
};