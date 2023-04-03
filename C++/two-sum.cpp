#include <iostream>
#include <array>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int x = 0;
        int y = 0;
        std::vector<int> new_arr;
        
        for (size_t i = 0; i < nums.size(); i++)
        {
            for (size_t j = 0; j < nums.size(); j++)
            {
               if (i != j)
               {
                    if (nums[i] + nums[j] == target)
                    {
                        x = i;
                        y = j;
                        break;
                    }
               }
                   
            }
            
        }

        new_arr.push_back(x);
        new_arr.push_back(y);
        
        return new_arr;
    }
};