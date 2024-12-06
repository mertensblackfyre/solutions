
#include <iostream>
#include <ostream>

const std::string base = "codeforces";

int solver(std::string s) {

  int indices = 0;

  for (int i = 0; i < base.size(); ++i) {
    if (base[i] != s[i]) {
      indices++;
    }
  }

  return indices;
};
int main(int argc, char *argv[]) {
  int n;
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    std::string s = "";
    std::cin >> s;

    int ans = solver(s);
    std::cout << ans << std::endl;
  }

  return 0;
}
