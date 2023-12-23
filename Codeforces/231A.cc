#include <algorithm>
#include <iostream>
#include <vector>

int solver(std::vector<int> nums);

int main(int argc, char *argv[]) {

  int x = 0;

  int n;
  std::cin >> n;

  for (size_t i = 0; i < n; i++) {
    std::vector<int> nums;

    int p, v, t;
    std::cin >> p >> v >> t;

    nums.push_back(p);
    nums.push_back(v);
    nums.push_back(t);

    x += solver(nums);
  }

  std::cout << x << std::endl;
  return 0;
}

int solver(std::vector<int> nums) {

  int count = 0;
  int p = 0;

  for (int n : nums)
    if (n == 1)
      count++;

  if (count >= 2)
      p = 1;

  return p;
}
