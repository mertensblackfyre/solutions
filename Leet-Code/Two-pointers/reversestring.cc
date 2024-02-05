#include <vector>

class Solution {
public:
  void reverseString(std::vector<char> &s) {

    int l = 0;
    int r = s.size() - 1;
    while (l < r) {
      char tmp = s[l];
      s[l] = s[r];
      s[r] = tmp;
      l++;
      r--;
    }
  }
};
int main() {

  Solution x;
  std::vector<char> s = {'h', 'e', 'l', 'l', 'o'};
  x.reverseString(s);
}
