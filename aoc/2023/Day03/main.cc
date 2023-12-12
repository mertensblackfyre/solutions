#include <algorithm>
#include <cctype>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<int> nums;

std::vector<std::vector<int>> offsets = {
    {0, 1},   // Up
    {0, -1},  // Down
    {-1, 0},  // Left
    {1, 0},   // Right
    {-1, 1},  // Up-Left
    {1, 1},   // Up-Right
    {-1, -1}, // Down-Left
    {1, -1}   // Down-Right
};

std::vector<std::vector<char>> grid;

class Soultion {
public:
  void make_grid();
  bool isperiod(char ch);
  bool isadjacent(std::vector<std::vector<int>> coor);
};

bool Soultion::isperiod(char ch) { return ch == '.'; }

bool Soultion::isadjacent(std::vector<std::vector<int>> coor) {
  for (const auto &point : offsets) {
    for (const auto &coordinate : point) {
    }
  }

  return false;
}
/*
void Solution::make_grid(){

}

*/

int main(int argc, char *argv[]) {

  Soultion solver;
  int sum = 0;

  std::ifstream file("test.txt");

  if (!file.is_open())
    std::cerr << "error opening the file." << std::endl;

  std::string line;

  while (std::getline(file, line)) {
    std::cout << line << std::endl;
  }

  file.close();

  return 0;
}
