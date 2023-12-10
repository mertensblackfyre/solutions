#include <algorithm>
#include <cctype>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

std::vector<std::unordered_map<int, std::vector<std::unordered_map<char, int>>>>
    data;

std::vector<int> ans;

const int red = 12;
const int green = 13;
const int blue = 14;

int to_int(std::string str);
int parse_game_id(std::string str);
void parse_color(std::string str, int game_id);
int main(int argc, char *argv[]) {

  std::ifstream file("test.txt");

  if (!file.is_open())
    std::cerr << "error opening the file." << std::endl;

  std::string line;

  while (std::getline(file, line)) {
    parse_game_id(line);
  }

  for (auto id : ans) {
    std::cout << id << std::endl;
  }
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
  std::unordered_map<char, int> data;
  for (char ch : str) {

    if (isdigit(ch))
      digit += ch;

    if (isspace(ch))
      continue;

    if (ch == 'r' || ch == 'g' || ch == 'b') {
      data[ch] = to_int(digit);
      digit.clear();
    }

    if (ch == ';') {
      if (data['r'] <= red && data['g'] <= green && data['b'] <= blue) {
        ans.push_back(game_id);
        break;
      } else if (data['r'] > red || data['g'] > green || data['b'] > blue) {
        break;
      }
      digit.clear();
      data.clear();
    }
  }

  return;
}
