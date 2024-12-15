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

void solver(int a) {

  if (a <= 1399)
    std::cout << "Division 4" << std::endl;
  if (a >= 1400 && a <= 1599)
    std::cout << "Division 3" << std::endl;
  if (a >= 1600 && a <= 1899)
    std::cout << "Division 2" << std::endl;
  if (a >= 1900)
    std::cout << "Division 1" << std::endl;
}
int main(int argc, char *argv[]) {

  int n;
  std::cin >> n;

  std::string a;
  for (int i = 0; i < n; ++i) {
    std::cin >> a;
    solver(string_to_int(a));
  }
  return 0;
}
