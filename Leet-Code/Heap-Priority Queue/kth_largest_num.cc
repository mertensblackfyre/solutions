
#include <algorithm>
#include <cmath>
#include <cstddef>
#include <exception>
#include <functional>
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
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    if (nums.size() == k && !nums.empty()) {
      std::cout << nums[0] << std::endl;
      return nums[0];
    };
    std::sort(nums.begin(), nums.end());
    for (size_t i = 0; i <= nums.size() - 1; i++) {
      pq.push(num_to_str(nums[i]));
    };

    while (pq.size() != k - 1 || !pq.empty()) {
      pq.pop();
    };

    if (pq.empty()) {
      std::string final = std::to_string(pq.top());
      return final;
    };

    std::string final = std::to_string(pq.top());
    std::cout << final << std::endl;
    return "0";
  }
};
int main() {

  Solution x;

  std::vector<std::string> nums3 = {"0"};
  std::vector<std::string> nums = {"3", "6", "7", "10"};

  std::vector<std::string> nums1 = {"2", "21", "12", "1"};
  x.kthLargestNumber(nums3, 1);
}
