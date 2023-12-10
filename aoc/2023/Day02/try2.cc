#include <algorithm>
#include <cctype>
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

void parse_color(std::string str);
int to_int(std::string str);
int parse_game_id(std::string str);

int main(int argc, char *argv[]) {

  std::ifstream file("t2.txt");

  if (!file.is_open())
    std::cerr << "error opening the file." << std::endl;

  std::string line;

  while (std::getline(file, line)) {
    parse_color(line);
  }

  for (auto id : ans) {
    std::cout << id << std::endl;
  }
  return 0;
}

int parse_game_id(std::string str) {

  int d;
  int index = 0;
  std::string digit = "";

  for (char ch : str) {
    if (ch == ':')
      break;
    if (isdigit(ch))
      digit += ch;
  }

  try {
    d = std::stoi(digit);
  } catch (const std::invalid_argument &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return d;
}

int to_int(std::string str) {
  int n;
  try {
    n = std::stoi(str);
  } catch (const std::invalid_argument &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  return n;
}
void parse_color(std::string str) {

  int game_id = parse_game_id(str);

  for (int i = 0; i < str.size(); i++) {

    std::unordered_map<char, int> data;
    std::string digit = "";
    char color;

    if (isdigit(str[i])) {
      digit += str[i];
    }

    if (str[i] == '\n')
      continue;

    if (str[i] == 'b' || str[i] == 'r' || str[i] == 'g') {
      color = str[i];
      int n = to_int(digit);
      data[color] = n;
    }

    if (str[i] == ';') {
        for (auto it : data) {
            std::cout << it.first << ":" << it.second << std::endl;
        }
      /*
    if (data['r'] < red && data['g'] < green && data['b'] < blue) {
      ans.push_back(game_id);
      data.clear();
      break;
    } else
      continue;
  }
  */
    }
  }

  return;
}
