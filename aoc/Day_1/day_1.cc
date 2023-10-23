
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main(int argc, char *argv[]) {

  std::unordered_map<int, int> data;
  std::string f_name = "input.txt";

  std::string line;
  int index = 0;
  int sum = 0;

  std::ifstream file(f_name);

  if (!file.is_open())
    std::cout << "Could not open" << f_name << std::endl;

  while (std::getline(file, line)) {
    if (!line.empty()) {
      int n_line = std::stoi(line);
      sum += n_line;
    }
    if (line.empty()) {
      data[index++] = sum;
      sum = 0;
    }
  }

  int max = 0;
  std::vector<int> top_three = {};
  for (auto d : data) {
    if (top_three.size() == 3)
      break;

    if (d.second > max) {
      if (std::find(top_three.begin(), top_three.end(), d.second) !=
          top_three.end()) {
          max = 0;
      } else {
        max = d.second;
        top_three.push_back(max);
        max = 0;
      }
    }
  }

  for (int t : top_three) {

    std::cout << "Max: " << t << std::endl;
  }
  // std::cout << "Max: " << max << std::endl;

  file.close();

  return 0;
}
