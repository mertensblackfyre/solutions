#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

class Solution {
public:
  int removeElement(std::vector<int> &nums, int val) {
    std::sort(nums.begin(), nums.end());
    auto it = find(nums.begin(), nums.end(), val);

    while (it != nums.end()) {
      nums.erase(it);
      it = find(nums.begin(), nums.end(), val);

    }
    return nums.size();
  };
};

int main() {

  Solution a;
  std::vector<int> case2 = {3, 2, 2, 3};
  a.removeElement(case2, 3);
}
