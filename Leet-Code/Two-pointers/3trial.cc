#include <vector>
#include <iostream>


class Solution {
public:
  std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
    
    std::vector<std::vector<int>> answer = {};
    int i = 0;
    int j = nums.size() - 2;
    int k = nums.size() - 1;

    while (i < nums.size()) {
      if ((i != j && i != k && j != k) && nums[i] + nums[j] + nums[k] == 0) {
        answer.push_back({nums[i], nums[j], nums[k]});
        j = nums.size() - 2;
        k = nums.size() - 1;
        i++;
      }

      if (j == i)
        j--;
      if (k == i)
        k--;

      if (j == 0) {
        j = nums.size() - 1;
        i++;
      }

      if (k == 0) {
        k = nums.size() - 1;
        i++;
      }
      if(j < 0 || k < 0){
            j--;
            k--;
      }
    }
    return answer;
  }
};

int main() {

  Solution p;
  std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
  p.threeSum(nums);
}
