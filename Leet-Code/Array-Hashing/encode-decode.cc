#include <iostream>
#include <vector>

class Solution {
public:
  std::string encode(std::vector<std::string> &strs) {

    std::string encoded_str = "";
    int count = 0;
    int size = strs.size();

    for (std::string s : strs) {
      if (count + 1 == size) {
        encoded_str += s;
        continue;
      }
      encoded_str += s + "+";
      count++;
    };

    return encoded_str;
  }

  std::vector<std::string> decode(std::string s) {

    std::vector<std::string> words;
    std::string word;

    int i = 0;

    while (i <= s.size()) {
      if (s[i] == '+') {
        std::cout << word << std::endl;
        words.push_back(word);
        word = "";
      } else {
        word += s[i];
      };
      i++;
    }

    for (std::string ss : words) {
      // std::cout << ss << std::endl;
    }
    return words;
  }
};

int main() {

  Solution ss;

  std::vector<std::string> input = {"neet", "code", "love", "you"};

  std::string sss = ss.encode(input);
  std::vector<std::string> aa = ss.decode(sss);
};
