#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
   std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {

        std::unordered_map<int, int> hashtable;
        std::vector<int> ans;

        for (size_t i = 0; i < nums1.size(); ++i) hashtable[nums1[i]]++;

        for (size_t i = 0; i < nums2.size(); i++)
            if (hashtable[nums2[i]])
            {
                hashtable[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        
        return ans;
    }
};