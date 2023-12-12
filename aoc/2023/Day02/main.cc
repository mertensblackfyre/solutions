#include <algorithm>
#include <cctype>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

std::vector<int> ans;

const int red = 12;
const int green = 13;
const int blue = 14;

int to_int(std::string str);
int parse_game_id(std::string str);
void parse_color(std::string str, int game_id);

int main(int argc, char *argv[]) {

  std::ifstream file("input.txt");
  int sum = 0;

  if (!file.is_open())
    std::cerr << "error opening the file." << std::endl;

  std::string line;

  while (std::getline(file, line)) {
    parse_game_id(line);
  }

  for (auto a : ans)
    sum += a;

  std::cout << sum << std::endl;

  return 0;
}

int parse_game_id(std::string str) {

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

  parse_color(str, d);
  return d;
}

int to_int(std::string str) {

  int n;

  try {
    n = std::stoi(str);
  } catch (const std::invalid_argument &e) {
    return -1;
  }
  return n;
}

void parse_color(std::string str, int game_id) {

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

  ans.push_back(game_id);

  return;
}
