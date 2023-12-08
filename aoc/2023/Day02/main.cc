#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

// pus28023@zbock.com
std::vector<std::unordered_map<int, std::unordered_map<char, int>>> data;

void parser(std::string str);

int parse_game_id(std::string str);
int parse_color(std::string str, std::string sub_str);
int main(int argc, char *argv[]) {

  std::ifstream file("input.txt");

  if (!file.is_open())
    std::cerr << "Error opening the file." << std::endl;

  std::string line;

  while (std::getline(file, line)) {
    int idx = 0;
    parser(line);
  }

  int sum = 0;
  for (const auto &outerMap : data) {
    for (const auto &innerMap : outerMap) {
      auto p = innerMap.second;
      if (p['r'] < 12 && p['b'] < 14 && p['g'] < 13) {

        std::cout << "Game " << innerMap.first << std::endl;
        sum += innerMap.first;
      }
      /*
         std::endl;

              std::cout << "Game " << innerMap.first << ": " << p['b'] <<
         std::endl; std::cout << "Game " << innerMap.first << ": " << p['g'] <<
         std::endl;

      */
    }
  }

  std::cout << "Sum: " << sum << std::endl;
  return 0;
}

void parser(std::string str) {

  int game_num = parse_game_id(str);
  int blue_num = parse_color(str, "blue");
  int green_num = parse_color(str, "green");
  int red_num = parse_color(str, "red");

  std::unordered_map<int, std::unordered_map<char, int>> innerMap;
  innerMap[game_num]['b'] = blue_num;
  innerMap[game_num]['g'] = green_num;
  innerMap[game_num]['r'] = red_num;

  data.push_back(innerMap);
}

int parse_game_id(std::string str) {

  int n = 5;
  int digit = 0;

  std::string sub_str = "Game";
  size_t pos = str.find(sub_str);

  try {
    if (pos != std::string::npos) {
      std::string ch = "";
      if (std::isdigit(str[pos + n + 1])) {
        ch = std::string(1, str[pos + n]) + std::string(1, str[pos + n + 1]);

        digit += std::stoi(ch);
      } else {
        ch = std::string(1, str[pos + n]);
        digit += std::stoi(ch);
      }
    }
  } catch (const std::invalid_argument &e) {
    std::cerr << "Invalid argument: " << e.what() << std::endl;
  } catch (const std::out_of_range &e) {
    std::cerr << "Out of range: " << e.what() << std::endl;
  }

  return digit;
}
int parse_color(std::string str, std::string sub_str) {

  int n = -2;
  int digit = 0;

  size_t pos = str.find(sub_str);

  try {
    while (pos < str.length()) {
      std::string ch = "";
      ch = std::string(1, str[pos + n - 1]) + std::string(1, str[pos + n]);
      ch.erase(std::remove_if(ch.begin(), ch.end(), ::isspace), ch.end());
      digit += std::stoi(ch);

      str.erase(pos, sub_str.length());
      pos = str.find(sub_str);
    }
  } catch (const std::invalid_argument &e) {
    std::cerr << "Invalid argument: " << e.what() << std::endl;
  } catch (const std::out_of_range &e) {
    std::cerr << "Out of range: " << e.what() << std::endl;
  }

  return digit;
}
