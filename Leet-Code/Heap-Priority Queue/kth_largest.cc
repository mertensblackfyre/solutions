#include <algorithm>
#include <iostream>
#include <vector>

class KthLargest {
public:
  std::vector<int> nums = {4, 5, 8, 2};
  int k = 3;
  // KthLargest(int k, std::vector<int> &nums) {}

  int add(int val) {

    nums.push_back(val);
    std::sort(nums.begin(), nums.end());

    
    for (int s: nums) {
    
    std::cout << s;
    }
     
    std::cout << std::endl;
    int x = nums[nums.size() - k];

    std::cout << x << std::endl;
    return x;
  };
};

int main() {

  std::vector<int> aa = {};
  KthLargest kthLargest;
  kthLargest.add(3);  // return 4
 kthLargest.add(5);  // return 5
  kthLargest.add(10); // return 5
 kthLargest.add(9);  // return 8
 kthLargest.add(4);  // return 8
  return 0;
}
