#include <iostream>
#include <vector>

std::string round_up(char a, int start) {
  std::string tmp = "";
  tmp += a;
  for (int i = 1; i < start; ++i) {
    tmp += "0";
  };
  return tmp;
};

void solver(std::string a) {

  int zeros = 0;
  int k = 0;
  std::vector<std::string> aa = {};

  for (int i = 0; i < a.size(); ++i) {
    if (a[i] != '0') {
      zeros = a.size() - 1 - i;
      std::string tmp = round_up(a[i], zeros + 1);
      aa.push_back(tmp);
      k++;
    }
  }

  std::cout << k << std::endl;
  for (std::string str : aa) {
    std::cout << str << " ";
  }
  std::cout << std::endl;
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
