#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  int findDuplicate(std::vector<int> &nums) {

    std::unordered_map<int, int> hash;

    for (int n : nums) {
      if (hash.count(n)) {
        hash[n]++;
        continue;
      }
      hash[n] = 1;
    }

    for (auto n : hash) {
      if (n.second >= 2) {
          continue;
        return n.first;
      }
    }

    return 0;
  }
};

int main() {

  Solution x;

  std::vector<int> m = {1, 3, 4, 2, 2};
  x.findDuplicate(m);

  return 0;
}
