#include <iostream>
#include <string>

std::string swap(char a, char b, char c) {

  // std::cout << a << b << c;
  std::string str = "";
  char tmp = a;
  a = b;
  b = tmp;

  str += c;
  str += a;
  str += b;
  std::cout << str << std::endl;
  return str;
};

void solver(std::string a) {

if (a == "abc") {
 // std::cout << "YES" << std::endl;
  return;
}


/*
if (swap(a[0], a[1], a[2]) == "abc") {
  //std::cout << "YES" << std::endl;
  return;
}

if (swap(a[1], a[2], a[0]) == "abc") {
  //std::cout << "YES" << std::endl;
  return;
}
  if (swap(a[0], a[2], a[1]) == "abc") {
    // std::cout << "YES" << std::endl;
    return;
  }
  */

if (swap(a[1], a[2], a[0]) == "abc") {
  //std::cout << "YES" << std::endl;
  return;
}
  // std::cout << "NO" << std::endl;
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
