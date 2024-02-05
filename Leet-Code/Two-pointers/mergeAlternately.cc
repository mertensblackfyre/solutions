#include <iostream>

class Solution {
public:
  std::string mergeAlternately(std::string word1, std::string word2) {

    int p1 =  0; 
    int p2 = 0;

    std::string str = "";
    while (p1 < word1.size() && p2 < word2.size()) {
      str += word1[p1];
      p1++;
      str += word2[p2];
      p2++;
      while(p1 == word1.size() && p2 < word2.size()) {
          str += word2[p2];
          p2++;
      }

      while(p2 == word2.size() && p1 < word1.size()) {
          str += word1[p1];
          p1++;
      }
    }

    return str;
  }


};
int main() {

  Solution x;
  x.mergeAlternately("ab", "pqrs");
}
