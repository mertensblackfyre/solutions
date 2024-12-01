#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>

class Solver {
public:
  std::vector<int> results;
  std::vector<int> first;
  std::vector<int> second;

  void finisher() {
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
        // file.get(ch);
      }else{

          

      }
      if (isspace(ch)) {

        in_first = false;
      }
      if (in_first) {
        int f = ch - '0';
        first.push_back(f);
        in_first = false;
      } else {
        int s = ch - '0';
        second.push_back(s);
        in_first = true;
      }
    }

    file.close();
  };
};

int main(int argc, char *argv[]) {

  Solver init;

  init.read_file_line("input.txt");

  // init.finisher();
  return 0;
}
