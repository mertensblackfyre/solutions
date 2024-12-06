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

  bool is_increasing(std::vector<int> second) {
    for (int i = 0; i < second.size(); ++i) {
      if (second[i] > second[i + 1]) {
        continue;
      } else {
        return false;
      }
    }
    return true;
  };
  bool is_decresing(std::vector<int> second) {
    for (int i = 0; i < second.size(); ++i) {
      if (second[i] < second[i + 1]) {
        continue;
      } else {
        return false;
      }
    }
    return true;
  };
  bool sub_solver(std::vector<int> second) {

    for (int i = 0; i < second.size(); ++i) {
        std::cout << second[i];
        if (abs(second[i] - second[i + 1]) >= 1 &&
          abs(second[i] - second[i + 1]) <= 3) {
        continue;
      } else {
        return false;
      }
    }

        std::cout << std::endl;
    return true;
  };

  //   std::cout << second[i] - second[i + 1] << std::endl;
  // if (second[i] - second[i + 1] > 1 || second[i] - second[i + 1] < 3) {
  // } else {
  // state = false;
  //}

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

    for (auto rr : holder) {

      // sub_solver(rr);

      if (is_decresing(rr) && sub_solver(rr)) {
        std::cout << "SAFE" << std::endl;
        safe++;
      }
      if (is_increasing(rr) && sub_solver(rr)) {
        std::cout << "SAFE" << std::endl;
        safe++;
      } else {
        std::cout << "NOT SAFE" << std::endl;
      }
    };
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
        continue;
      }
      if (ch == ' ') {
        int n = string_to_int(num);
        temp.push_back(n);
        // std::cout << num;
        num = "";
        continue;
      }
      if (ch == '\n' || ch == EOF || ch == '\r') {
        // std::cout << num;
        // std::cout << std::endl;
        int n = string_to_int(num);
        temp.push_back(n);
        holder.push_back(temp);
        temp.erase(temp.begin(), temp.end());

        num = "";
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
