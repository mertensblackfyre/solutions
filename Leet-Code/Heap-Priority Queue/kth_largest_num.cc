
#include <algorithm>
#include <cmath>
#include <cstddef>
#include <exception>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

class Solution {
public:
  int num_to_str(std::string num) {

    int n = 0;
    try {
      n = std::stoi(num);
      return n;
    } catch (std::exception error) {
      std::cout << "Error:" << error.what() << std::endl;
      return -1;
    }
    return n;
  };

  std::string kthLargestNumber(std::vector<std::string> &nums, int k) {
    std::priority_queue<int> pq;

    std::vector<int> new_nums;

    for (std::string sn : nums) {
      new_nums.emplace_back(num_to_str(sn));
    };

    std::sort(new_nums.begin(), new_nums.end());

    if (new_nums.size() == k && !new_nums.empty()) {
      std::cout << nums[0] << std::endl;
      return nums[0];
    };


    std::cout << "size: " << new_nums.size() << std::endl;
    while (k != 1 && !new_nums.empty()) {
      std::cout << "popped: " << new_nums.back() << std::endl;
      new_nums.pop_back();
      k--;
    };

    if (pq.empty()) {
      return std::to_string(new_nums.back());
    };

    std::cout << new_nums.back() << std::endl;
    return std::to_string(new_nums.back());
  }
};
int main() {

  Solution x;

  int k = 1;
  std::vector<std::string> nums4 = {"1", "0", "0"};
  std::vector<std::string> nums3 = {"0"};
  std::vector<std::string> nums = {"3", "6", "7", "10"};

  std::vector<std::string> nums1 = {"2", "21", "12", "1"};
  x.kthLargestNumber(nums4, 3);
}
