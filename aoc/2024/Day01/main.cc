#include <algorithm>
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
  std::vector<int> first;
  std::vector<int> second;

  int string_to_int(std::string str) {
    int num = 0;
    try {
      num = std::stoi(str);
    } catch (...) {
      return 0;
    }
    return num;
  };

  void part_two_solver() {

    int answer = 0;
    int sim_score = 0;
    std::sort(first.begin(), first.end());
    std::sort(second.begin(), second.end());

    for (int f : first) {

      int n = 0;
      for (int s : second) {
        if (f == s) {
          sim_score++;
        }
      }
      n = f * sim_score;
      results.push_back(n);
      sim_score = 0;
    }

    for (int a : results) {
      answer += a;
    }

    std::cout << answer << std::endl;
  };

  void part_one_solver() {
    int answer = 0;
    while (!first.empty() && !second.empty()) {
      int result = 0;
      std::sort(first.begin(), first.end());
      std::sort(second.begin(), second.end());

      if (first[0] >= second[0])
        result = first[0] - second[0];
      else
        result = second[0] - first[0];

      results.push_back(result);
      first.erase(first.begin());
      second.erase(second.begin());
    };

    for (int a : results) {
      answer += a;
    }

    std::cout << answer << std::endl;
  };
  void read_file_line(std::string filename) {

    bool in_first = true;
    std::string contents = "";
    std::ifstream file(filename);

    if (!file) {
      std::cout << "Unable to open file";
    }

    char ch;
    std::string num = "";
    while (file.get(ch)) {
      if (isdigit(ch)) {
        num += ch;
        continue;
      } else {
        if (in_first) {
          int f = string_to_int(num);
          first.push_back(f);
          in_first = false;
          num = "";
        } else {
          int s = string_to_int(num);
          second.push_back(s);
          in_first = true;
          num = "";
        }
      }
    }
    file.close();
  };
};

int main(int argc, char *argv[]) {

  Solution init;

  //init.read_file_line("input.txt");

  init.read_file_line("input2.txt");
 // init.part_one_solver();
 init.part_two_solver();
  return 0;
}
