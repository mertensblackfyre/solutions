#include <iostream>
#include <vector>


class Solution {
public:
    std::vector<int> buildArray(std::vector<int>& nums) {
        std::vector<int> arr;
        for (size_t i = 0; i < nums.size(); i++)
            arr.push_back(nums[nums[i]]);
            return arr;
    }
};


int main()
{
    Solution r;
    std::vector<int> data = {0,2,1,5,3,4};
    r.buildArray(data);
    return 0;
}