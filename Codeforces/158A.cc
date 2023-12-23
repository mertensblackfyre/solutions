#include <algorithm>
#include <iostream>
#include <vector>

int solver(std::vector<int> nums, int k);

int main(int argc, char *argv[]) {

  std::vector<int> num;
  int cnt = 0;
  int n, k;
  std::cin >> n >> k;

  for (size_t i = 0; i < n; i++) {
      int s;
      std::cin >> s;
      num.push_back(s);    
   }

  solver(num, k);

  return 0;
}

int solver(std::vector<int> nums, int k) {
  int cnt = 0;
  for (size_t i = 0; i < nums.size(); i++) {
    if (nums[i] <= 0) continue;

    if (nums[i] >= nums[k - 1]) {
      cnt++;
    }
  }

  std::cout <<cnt<< std::endl;
  return 1;
}
