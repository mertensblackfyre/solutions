#include <cctype>
#include <iostream>

bool solver(std::string s1, std::string s2) {

  std::string new_str1;
  std::string new_str2;

  for (char s : s1) {
    new_str1 += (char)tolower(s);
  };

  for (char s : s2) {
    new_str2 += (char)tolower(s);
  };
  return true;
}

int main() {
  std::string s;
  std::cin >> s;

  std::string s2;
  std::cin >> s2;

  std::cout << "";

  if (s < s2) {
    std::cout << "-1" << std::endl;
  }
  if (s > s2) {
    std::cout << "1" << std::endl;
  }

  if (s == s2) {
    std::cout << "0" << std::endl;
  }

  return 0;
}
