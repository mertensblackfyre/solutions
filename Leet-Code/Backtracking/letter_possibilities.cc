#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<std::string> res;

  void backtrack(int start, std::string tiles, std::string &perm) {

  if (start >= tiles.size()) {
    res.push_back(perm);
    return;
  };

  perm.push_back(tiles[start]);
  backtrack(start + 1, tiles, perm);
  perm.pop_back();
  backtrack(start + 1, tiles, perm);
  };
  int numTilePossibilities(std::string tiles) {
    // res.clear();
    std::string perm;
    backtrack(0, tiles, perm);
    return res.size();
  };
};

int main() {

  Solution x;

  std::string tiles = "AAABBC";
  int w = x.numTilePossibilities(tiles);

  std::cout << w << std::endl;
  return 0;
}
