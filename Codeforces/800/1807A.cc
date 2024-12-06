
/*

You are given three integers a, b, and c such that exactly one of these two
equations is true: a+b=c a−b=c Output + if the first equation is true, and -
otherwise. Input

The first line contains a single integer t
(1 ≤ t ≤ 162) — the number of test cases.

The description of each test case consists of three integers a
, b, c (1≤a,b≤9, −8≤c≤18). The additional constraint on the input: it will be
generated so that exactly one of the two equations will be true.
*/

#include <cctype>
#include <iostream>
#include <ostream>

int string_to_int(std::string str) {
  int num = 0;
  try {
    num = std::stoi(str);
  } catch (...) {
    return 0;
  }
  return num;
};
char solver(std::string a, std::string b, std::string c) {

  int f = 0;
  if (string_to_int(a) + string_to_int(b) == string_to_int(c)) {
    return '+';
  }
  if (string_to_int(a) - string_to_int(b) == string_to_int(c)) {
    return '-';
  }

  return '-';
};
int main(int argc, char *argv[]) {
  int n;
  std::cin >> n;

  std::string num;
  std::string a;
  std::string b;
  std::string c;

  for (int i = 0; i < n; ++i) {

    std::cin >> a >> b >> c;

    num = a + b + c;

    char ans = solver(a, b, c);
    std::cout << ans << std::endl;
  }

  std::cout << '\n';

  return 0;
}
