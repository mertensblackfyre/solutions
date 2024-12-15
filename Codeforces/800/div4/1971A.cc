#include <iostream>

int char_to_int(char ch) {
  int n = ch;
  return n;
};

void solver(char a, char b) {

  if (a <= b) {
    std::cout << a << " ";
  } else {
    std::cout << b << " ";
  }

  if (a >= b) {
    std::cout << a << " ";
  } else {
    std::cout << b << " ";
  }
  std::cout << std::endl;
}
int main(int argc, char *argv[]) {

  int n;
  std::cin >> n;

  char a, b;
  for (int i = 0; i < n; ++i) {
    std::cin >> a;
    std::cin >> b;
    solver(char_to_int(a), char_to_int(b));
  }
  return 0;
}
