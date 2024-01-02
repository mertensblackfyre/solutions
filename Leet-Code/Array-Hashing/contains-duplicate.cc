#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {

    std::unordered_map<int, int> table;

    for (int n : nums) {
      if (table.count(n)) 
        return true;

      table[n]++;
    }

    return false;
  }
};

int main() {

  Solution test;

  std::vector<int> case_one = {1, 2, 3, 1};
  std::vector<int> case_two = {1, 2, 3, 4};
  std::vector<int> case_three = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

  test.containsDuplicate(case_three);
}
