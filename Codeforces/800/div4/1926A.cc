#include <iostream>
void solver(std::string a) {
  int A = 0;
  int B = 0;

  for (int i = 0; i < a.size(); ++i) {
    if (a[i] == 'A') {
      A++;
    } else {
      B++;
    }
  }

  if (A > B) {
    std::cout << "A" << std::endl;
  } else {
    std::cout << "B" << std::endl;
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
