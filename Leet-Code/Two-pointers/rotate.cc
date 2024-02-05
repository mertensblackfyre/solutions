
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  void rotate(std::vector<int> &nums, int k) {
    int count = 0;
    std::vector<int> pro  = nums;

    for (int i = 0; i < nums.size(); i++) {
      int n = (i + k) % nums.size();
      nums[n] = pro[i];
    }
  }
};
int main() {

  Solution x;
  std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  x.rotate(nums, 3);
}
