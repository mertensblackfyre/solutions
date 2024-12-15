#include <iostream>

int char_int(char a) {
  int f = a - '0';
  return f;
};
void solver(std::string a) {

  int sum = char_int(a[0]) + char_int(a[2]);

  std::cout << sum << std::endl;
};
int main() {

  int n;
  std::cin >> n;

  std::string a;
  for (int i = 0; i < n; ++i) {
    std::cin >> a;

    solver(a);
  }

  return 0;
}
