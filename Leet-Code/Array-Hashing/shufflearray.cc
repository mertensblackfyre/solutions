#include <bits/stdc++.h>
#include <vector>

class Solution {
public:
  std::vector<int> shuffle(std::vector<int> &nums, int n) {

    std::vector<int> new_arr = {};
    for (size_t i = 0; i <= n - 1; ++i) {
      new_arr.push_back(nums[i]);
      new_arr.push_back(nums[n + i]);
    };

    for (int n : new_arr) {
      std::cout << n << "\n";
    }
    return new_arr;
  }
};
int main() {

  Solution a;
  std::vector<int> case2 = {2, 5, 1, 3, 4, 7};
  a.shuffle(case2, 3);
}
