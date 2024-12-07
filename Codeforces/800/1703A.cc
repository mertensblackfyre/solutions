#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

void solver(std::string a) {

  std::transform(a.begin(), a.end(), a.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  
  if (a == "yes") {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}
int main(int argc, char *argv[]) {

  int n;
  std::cin >> n;

  std::string a;
  for (int i = 0; i < n; ++i) {
    std::cin >> a;
    solver(a);
  }
  return 0;
}
