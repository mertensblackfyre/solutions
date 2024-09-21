#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  int longestConsecutive(std::vector<int> &nums) {

    int ans = 1;
    std::vector<int> arr = {};
    std::sort(nums.begin(), nums.end());
    int front, back = 0;
    front = 1;

    if (nums.size() == 0)
      return 0;

    while (front <= nums.size()) {
      if (front <= nums.size()) {
        if (nums[back] + 1 == nums[front]) {
          ans++;
        } else {
          arr.push_back(ans);
          ans = 1;
        }
        front++;
        back++;
      } else {
        break;
      }
    }

    std::sort(arr.begin(), arr.end());
    for (int k = 0; k < arr.size(); ++k) {
    //  std::cout << arr[k] << "->";
    };

    std::cout << std::endl << "Anst-->" << arr[arr.size() - 1];
    return arr[arr.size() - 1];
  };
};

int main() {

  Solution a;
  std::vector<int> case1 = {100, 4, 200, 1, 3, 2};
  std::vector<int> case2 = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  std::vector<int> case3 = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
  a.longestConsecutive(case1);
  a.longestConsecutive(case2);
  a.longestConsecutive(case3);
}
