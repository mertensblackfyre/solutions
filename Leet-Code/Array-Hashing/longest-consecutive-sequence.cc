#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  int longestConsecutive(std::vector<int> &nums) {

    std::vector<int> n;
    int count = 1;
    std::sort(nums.begin(), nums.end());
    for (size_t i = 0; i < nums.size(); i++) {
      if (i + 1 <= nums.size()) {
        if (nums[i] == nums[i + 1])
          continue;
        if (nums[i] + 1 == nums[i + 1])
          count++;
        else {
          n.push_back(count);
          count = 1;
        }
      }
    }

 
    std::sort(n.begin(),n.end());

    std::cout << n[n.size() - 1] <<std::endl;
    return n[n.size() - 1];
  }
};

int main() {

  Solution a;
  std::vector<int> case1 = {100, 4, 200, 1, 3, 2};
  std::vector<int> case2 = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  std::vector<int> case3 = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
  a.longestConsecutive(case2);
}
