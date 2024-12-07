#include <iostream>

int char_to_int(char ch) {
  int n = ch;
  return n;
};

void solver(std::string a) {
  int first = char_to_int(a[0]) + char_to_int(a[1]) + char_to_int(a[2]);
  int second = char_to_int(a[3]) + char_to_int(a[4]) + char_to_int(a[5]);

  if (first == second) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
}
int main(int argc, char *argv[]) {

  int n;
  std::cin >> n;

  std::string a, b, c;
  for (int i = 0; i < n; ++i) {
    std::cin >> a;
    solver(a);
  }
  return 0;
}
