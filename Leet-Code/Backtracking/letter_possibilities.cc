#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> res;

  void backtrack(int start, std::string tiles, std::vector<std::string> &perm,
                 std::vector<bool> &picks) {
    /*
        if (perm.size() == nums.size()) {
        auto it = std::find(res.begin(), res.end(), perm);
        if (it == res.end()) {
          res.push_back(perm);
          return;
        }
        return;
      };
  */
    for (int i = 0; i < tiles.size(); i++) {
      if (!picks[i]) {
        std::string s;
        s = s + tiles[i];
        perm.push_back(s);
        picks[i] = true;
        backtrack(i, tiles, perm, picks);
        perm.pop_back();
        picks[i] = false;
      }
    }
  };
  int numTilePossibilities(std::string tiles) {
    res.clear();
    std::vector<std::string> perm;
    std::vector<bool> picks(tiles.size(), false);
    backtrack(0, tiles, perm, picks);
    return 1;
  };
};

int main() {

  Solution x;

  std::string tiles = "AAB";
  x.numTilePossibilities(tiles);

  return 0;
}
