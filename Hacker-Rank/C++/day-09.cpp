#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {

  if (n == 0)
    return 1;
  else
    return (n * factorial(n - 1));
}

int main() {
  int input;
  std::cin >> input;

  int y = factorial(input);
  std::cout << y;

  return 0;
}
