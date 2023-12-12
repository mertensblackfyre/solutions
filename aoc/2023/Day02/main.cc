#include <algorithm>
#include <cctype>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<int> ans;

const int red = 12;
const int green = 13;
const int blue = 14;

class Soultion {
public:
  int to_int(std::string str);
  int parse_game_id(std::string str);
  void solver_part_one(std::string str, int game_id);
  void solver_part_two(std::string str, int game_id);
  int find_min(std::vector<int> nums);
};

int Soultion::to_int(std::string str) {
  int n;

  try {
    n = std::stoi(str);
  } catch (const std::invalid_argument &e) {
    return -1;
  }
  return n;
}

int Soultion::parse_game_id(std::string str) {

  int index = 0;
  std::string digit = "";

  for (char ch : str) {
    if (ch == ':')
      break;
    if (isdigit(ch))
      digit += ch;

    index++;
  }

  int d = to_int(digit);

  if (index < str.size())
    str.erase(str.begin(), str.begin() + index + 2);

  solver_part_two(str, d);
  return d;
}

void Soultion::solver_part_one(std::string str, int game_id) {

  std::string digit = "";

  for (char ch : str) {

    if (isdigit(ch))
      digit += ch;

    if (isspace(ch))
      continue;

    if (ch == 'r') {
      if (to_int(digit) > red)
        return;
      digit.clear();
    }

    if (ch == 'b') {
      if (to_int(digit) > blue)
        return;
      digit.clear();
    }

    if (ch == 'g') {
      if (to_int(digit) > green)
        return;
      digit.clear();
    }
  }

  return;
}

int Soultion::find_min(std::vector<int> nums) {

  int max = 0;

  for (auto n : nums) 
    if (n != -1)
      if (n > max)
        max = n;

  return max;
}
void Soultion::solver_part_two(std::string str, int game_id) {

  std::string digit = "";
  std::vector<int> r;
  std::vector<int> b;
  std::vector<int> g;

  for (char ch : str) {

    if (isdigit(ch))
      digit += ch;

    if (isspace(ch))
      continue;

    if (ch == 'r') {
      r.push_back(to_int(digit));
      digit.clear();
    }

    if (ch == 'b') {
      b.push_back(to_int(digit));
      digit.clear();
    }

    if (ch == 'g') {
      g.push_back(to_int(digit));
      digit.clear();
    }
  }

  int max_r = find_min(r);
  int max_b = find_min(b);
  int max_g = find_min(g);
  int product = max_b * max_g * max_r;

  ans.push_back(product);
}

int main(int argc, char *argv[]) {

  Soultion solver;
  int sum = 0;

  std::ifstream file("input.txt");

  if (!file.is_open())
    std::cerr << "error opening the file." << std::endl;

  std::string line;

  while (std::getline(file, line)) {
    solver.parse_game_id(line);
  }

  for (auto a : ans)
    sum += a;

  std::cout << sum << std::endl;
  return 0;
}
