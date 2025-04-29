#include <iostream>
#include <string>

class Solution {
public:
  long int string_to_int(std::string str) {
    long int num = 0;
    try {
      num = std::stoll(str); // Use stoll for 64-bit
    } catch (...) {
      return -1;
    }
    return num;
  };

  std::string solver(std::string num) {

    std::string n;
    int max = 0;
    for (char c : num) {
      int nn = string_to_int(n);
      if (nn % 2 != 0) {
        if (nn > max) {
          max = nn;
        };
      }
      n += c;
    };

    if (max == 0) {
      return "";
    };

    std::string s = std::to_string(max);

    return s;
  };
  std::string largestOddNumber(std::string num) {

    long int n = string_to_int(num);
    if (n % 2 != 0) {

      return num;
    } else {
      return solver(num);
    }

    return "";
  };
};
int main() {

  std::string n = "2928327648";

  Solution x;

  std::cout << x.largestOddNumber(n) << std::endl;
}
