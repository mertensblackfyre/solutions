#include <algorithm>
#include <vector>

class Solution {
private:
  std::vector<int> helper(std::vector<int> nums1, std::vector<int> nums2) {
    std::vector<int>::iterator it;
    std::vector<int> ans = {};
    for (int i = 0; i < nums1.size(); ++i) {
      it = std::find(nums2.begin(), nums2.end(), nums1[i]);
      if (it == nums2.end()) {
        ans.push_back(nums1[i]);
      }
    }
    std::sort(ans.begin(), ans.end());
    ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
    return ans;
  }

public:
  std::vector<std::vector<int>> findDifference(std::vector<int> &nums1,
                                               std::vector<int> &nums2) {
    std::vector<std::vector<int>> answer;
    answer.push_back(helper(nums1, nums2));
    answer.push_back(helper(nums2, nums1));
    return answer;
  }
};

int main() {

  Solution test;

  std::vector<int> nums1 = {1, 2, 3};
  std::vector<int> nums2 = {2, 4, 6};

  test.findDifference(nums1, nums2);
}
