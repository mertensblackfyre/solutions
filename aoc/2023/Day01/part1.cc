#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
int main(int argc, char *argv[]) {
  std::vector<int> nums;
  std::fstream fin("input.txt", std::fstream::in);

  try {
    char ch;
    std::vector<char> all_d;

    while (fin >> std::noskipws >> ch) {
      if (std::isdigit(ch)) {
        all_d.push_back(ch);
      }
      if (ch == '\n') {
        if (all_d.size() == 1) {
          all_d.push_back(all_d.front());
        }

        std::string s;
        s += all_d.front();
        s += all_d.back();
        all_d.clear();

        int x = std::stoi(s);
        s = "";
        nums.push_back(x);
      }
    }

  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  int sum = 0;
  for (int n : nums) {
    sum += n;
  }

    std::cout << sum << std::endl;
  return 0;
}
