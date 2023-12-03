#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

std::unordered_map<std::string, int> num_string = {
    {"one", 1}, {"two", 2},   {"three", 3}, {"four", 4}, {"five", 5},
    {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9},
};

std::string replace_string(std::string);
int to_num(std::string);

int main(int argc, char *argv[]) {
  std::vector<int> nums;

  int sum = 0;

  std::ifstream file("input.txt");

  if (!file.is_open()) {
    std::cerr << "Error opening the file." << std::endl;
    return 1;
  }

  std::string line;
  while (std::getline(file, line)) {
    std::string n_l = replace_string(line);
    int x = to_num(n_l);
    nums.push_back(x);
  }

  file.close();
  for (int n : nums) {
    sum += n;

    //   std::cout << n << std::endl;
  }

  return 0;
}

std::string replace_string(std::string str) {
  std::string new_s;

  for (auto it = num_string.begin(); it != num_string.end(); ++it) {
    size_t position = str.find(it->first);
    if (position != std::string::npos) {
      str.replace(position, it->first.length(), std::to_string(it->second));
    }
  }
  return str;
}

int to_num(std::string str) {
  int x = 1;

  try {
    for (char ch : str) {
      std::vector<char> all_d;
      if (std::isdigit(ch)) {
        all_d.push_back(ch);
      }

      if (ch == EOF) {

        std::cout << ch << std::endl;
        if (all_d.size() == 1) {
          all_d.push_back(all_d.front());
        }

        std::string s;
        s += all_d.front();
        s += all_d.back();

        x = std::stoi(s);
        return x;
      }
    }

  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}
