#include <vector>
#include <iostream>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int count;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[count] = nums[i];
                count++;
            }
        }

            return count;
    }

};

int main()
{
    Solution x;
    std::vector<int> data = {3,2,2,3};

    x.removeElement(data,3);
    return 0;
}