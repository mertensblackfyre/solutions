#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  std::vector<int> results;

  std::vector<std::vector<int>> holder;
  // std::vector<int> second;

  bool sub_solver(std::vector<int> second) {

   // std::vector<int> second = {7, 6, 4, 2, 1};

      second = {8, 6, 4, 4, 1};
    for (int i = 0; i < second.size(); ++i) {
      if (i + 1 == second.size()) {
        if (second[i] < second[i + 1] || second[i] > second[i + 1]) {
          std::cout << second[i] - second[i + 1] << std::endl;
          if (second[i] - second[i + 1] > 1 || second[i] - second[i + 1] < 3) {
            continue;
          } else {
            return false;
          }
        } else {
          return false;
        }
      }
    }

    return true;
  };
  int string_to_int(std::string str) {
    int num = 0;
    try {
      num = std::stoi(str);
    } catch (...) {
      return 0;
    }
    return num;
  };

  void part_two_solver() {};

  void part_one_solver() {

    int safe = 0;
    if (sub_solver(results) == true) {
      std::cout << "qqq" << std::endl;
      safe++;
    }
    /*
    for (auto rr : holder) {
      if (sub_solver(rr)) {
        std::cout << "qqq" << std::endl;
        safe++;
      }
    };
    */

     std::cout << safe << "\n";
  };
  void read_file_line(std::string filename) {

    std::string contents = "";
    std::ifstream file(filename);

    if (!file) {
      std::cout << "Unable to open file";
    }

    char ch;
    std::string num = "";
    std::vector<int> temp = {};
    while (file.get(ch)) {
      if (isdigit(ch)) {
        num += ch;
      }
      if (isspace(ch)) {
        int n = string_to_int(num);
        temp.push_back(n);
        num = "";
      }
      if (ch == '\n') {
        int n = string_to_int(num);
        temp.push_back(n);
        num = "";
        holder.push_back(temp);
        temp.erase(temp.begin(), temp.end());
      }
    }

    file.close();
  };
};

int main(int argc, char *argv[]) {

  Solution init;
  std::vector<int> arr = {};
  init.read_file_line("input1.txt");

  // init.sub_solver(arr);
  //  init.read_file_line("input2.txt");
  init.part_one_solver();
  // init.part_two_solver();
  return 0;
}
