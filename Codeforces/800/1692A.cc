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

void solver(int a, int b, int c, int d) {
  int ans = 0;

  if (a < b) {
    ans++;
  }

  if (a < c) {
    ans++;
  }

  if (a < d) {
    ans++;
  }

  std::cout << ans << std::endl;
}
int main(int argc, char *argv[]) {

  int n;
  std::cin >> n;

  std::string a, b, c, d;
  for (int i = 0; i < n; ++i) {
    std::cin >> a >> b >> c >> d;
    solver(string_to_int(a), string_to_int(b), string_to_int(c),
           string_to_int(d));
  }
  return 0;
}
