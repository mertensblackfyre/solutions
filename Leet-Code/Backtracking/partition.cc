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

  std::vector<std::vector<std::string>> partition(std::string s) {
        
    };
  
};

int main() {

  Solution x;

  std::string tiles = "aab";
  x.partition(tiles);

  return 0;
}
