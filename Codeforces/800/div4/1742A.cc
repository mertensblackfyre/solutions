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

void solver(int a, int b, int c) {

  if (a + b == c || a + c == b || c + b == a) {
    std::cout << "YES" << std::endl;
    return;
  }

  std::cout << "NO" << std::endl;
}
int main(int argc, char *argv[]) {

  int n;
  std::cin >> n;

  std::string a, b, c;
  for (int i = 0; i < n; ++i) {
    std::cin >> a >> b >> c;
    solver(string_to_int(a), string_to_int(b), string_to_int(c));
  }
  return 0;
}
