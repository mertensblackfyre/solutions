#include <iostream>

int char_int(char a) {

  int f = (int)a;

  return f;
};
void solver(std::string a) {

};

int main() {

  int n;
  std::cin >> n;

  std::string a, b;
  for (int i = 0; i < n; ++i) {
    std::cin >> a >> b;
    std::cout << a << b;
  }

  return 0;
}
