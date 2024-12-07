#include <iostream>


void solver(char a) {
  const std::string base = "codeforces";

  if (base.find(a) != std::string::npos) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}
int main(int argc, char *argv[]) {

  int n;
  std::cin >> n;

  char a;
  for (int i = 0; i < n; ++i) {
    std::cin >> a;
    solver(a);
  }
  return 0;
}
