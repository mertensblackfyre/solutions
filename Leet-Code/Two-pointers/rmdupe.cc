#include <set>
#include <vector>
class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {

    std::set<int> s(nums.begin(), nums.end());
    std::vector<int>nums1 (s.begin(), s.end());
    nums = nums1;
    return nums1.size();
  }
};

int main() {

  Solution x;
  std::vector<int> nums1 = {1, 1, 2};
  x.removeDuplicates(nums1);
}
