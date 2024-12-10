#include <iostream>
#include <string>

std::string swap(std::string s) {

  if (s[0] == 'a' && (s[1] != 'b' || s[2] != 'c')) {
    char tmp = s[1];
    s[1] = s[2];
    s[2] = tmp;
  }
  if (s[0] == 'b' && s[1] == 'a') {
    char tmp = s[0];
    s[0] = s[1];
    s[1] = tmp;
  }
  if (s[0] == 'c' && s[2] == 'a') {
    char tmp = s[0];
    s[0] = s[2];
    s[2] = tmp;
  }
  return s;
};
void solver(std::string a) {

  if (a == "abc") {
    std::cout << "YES" << std::endl;
    return;
  }
  if (swap(a) == "abc") {
    std::cout << "YES" << std::endl;
    return;
  } else {
    std::cout << "NO" << std::endl;
    return;
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
