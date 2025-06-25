#include <algorithm>
#include <queue>
#include <vector>

class Solution {
public:
  std::vector<int> getFinalState(std::vector<int> &nums, int k,
                                 int multiplier) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    for (int num : nums)
      pq.push(num);

    while (k != 0) {
      int top = pq.top();
      pq.pop();
      pq.push(top * multiplier);
      auto it = std::find(nums.begin(), nums.end(), top);
      if (it != nums.end()) {
        int i = std::distance(nums.begin(), it);
        nums[i] *= multiplier;
      };
      k--;
    };
    return nums;
  }
};

int main() {}
