#include <vector>

class Solution {
public:
  void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {

    int p1 = m - 1;
    int p2 = 0;

    while (p2 < n)
      nums1[p1++] = nums2[p2++];
  }
};
int main() {

  Solution x;
  std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  std::vector<int> nums2 = {2, 5, 6};
  x.merge(nums1, 3, nums2, 3);
}
