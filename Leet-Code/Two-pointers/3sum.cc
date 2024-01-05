#include <iostream>
#include <vector>

class Solution {
public:
  int threeSum(std::vector<int> &nums) {

    int i = 0;
    int j = i + 1;
    int k = j + 1;

    while (i < nums.size()) {

      if ((i != j && i != k && j != k) && nums[i] + nums[j] + nums[k] == 0) {
        std::cout << "1st: " << nums[i] << " 2nd: " << nums[j]
                  << " 3rd: " << nums[k] << std::endl;
        j = 0;
        k = j + 1;
        i++;
      } else {
        j = 0;
        k = j + 1;
        i++;
      }
      if (i < nums.size() && k < nums.size() && j < nums.size()) {
        k++;
        j++;
      }

      std::cout << "1st: " << nums[i] << " 2nd: " << nums[j]
                << " 3rd: " << nums[k] << std::endl;
    }
    return 1;
  }
};

int main() {

  Solution p;
  std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
  // std::string case_one_s = "A man, a plan, a canal: Panama";
  // std::string case_two_s = "race a car";

  p.threeSum(nums);
}
