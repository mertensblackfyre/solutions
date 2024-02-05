#include <vector>

class Solution {
public:
  void moveZeroes(std::vector<int> &nums) {

    int r = 0;
    std::vector<int> nums1 = {};
    for (size_t i = 0; i < nums.size(); i++) {
      if (nums[i] != 0)
        nums1.push_back(nums[i]);
      if (nums[i] == 0)
        r++;
    }
    for (size_t i = 0; i < r; i++) {
      nums1.push_back(0);
    }
  }
};

int main() {

  Solution x;
  std::vector<int> nums1 = {0, 1, 0, 3, 12};
  x.moveZeroes(nums1);
}
