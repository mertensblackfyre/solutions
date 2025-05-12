#include <vector>

class Solution {
public:
  void backtrack(int s, int n, int k, std::vector<int> &perm,
                 std::vector<std::vector<int>> &res) {

    if (perm.size() == k) {
      res.push_back(perm);
      return;
    }

    for (size_t i = s; i <= n; i++) {
      perm.push_back(i);
      backtrack(i + 1, n, k, perm, res);
      perm.pop_back();
    }
  };
  std::vector<std::vector<int>> combine(int n, int k) {
    std::vector<int> perm = {};
    std::vector<std::vector<int>> res;
    backtrack(1, n, k, perm, res);
    return res;
  }
};
int main() {

  Solution x;

  return 0;
}
