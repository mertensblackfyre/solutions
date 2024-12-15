#include <algorithm>
#include <cctype>
#include <iostream>

int string_to_int(std::string str) {
  int num = 0;
  try {
    num = std::stoi(str);
  } catch (...) {
    return 0;
  }
  return num;
};

void solver(int a, std::string b) {

  const std::string base = "Timur";
  std::sort(b.begin(), b.end());

  if (a != base.size()) {
    std::cout << "NO" << std::endl;
    return;
  }

  if (b[0] != base[0]) {
    std::cout << "NO" << std::endl;
    return;
  }

  for (int i = 0; i < b.size(); i++) {
    if (b[i] == 'T') {
      continue;
    }
    if (isupper(b[i])) {
      std::cout << "NO" << std::endl;
      return;
    }
  };

  std::cout << "YES" << std::endl;
  return;
}
int main(int argc, char *argv[]) {

  int n;
  std::cin >> n;

  std::string a, b;
  for (int i = 0; i < n; ++i) {

    std::cin >> a;
    std::cin >> b;
    solver(string_to_int(a), b);
  }
  return 0;
}
