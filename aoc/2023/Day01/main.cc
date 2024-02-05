#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
//54885
std::unordered_map<std::string, std::string> num_string = {
    {"one", "one1one"},       {"two", "two2two"},
    {"three", "three3three"}, {"four", "four4four"},
    {"five", "five5five"},    {"six", "six6six"},
    {"seven", "seven7seven"}, {"eight", "eight8eight"},
    {"nine", "nine9nine"},
};

std::string replace_string(std::string str);
void input_write();

int main(int argc, char *argv[]) {

  input_write();
  std::vector<int> nums;
  std::fstream fin("t2.txt", std::fstream::in);

  try {
    char ch;
    std::vector<char> all_d;

    while (fin >> std::noskipws >> ch) {
      if (std::isdigit(ch)) {
        all_d.push_back(ch);
      }
      if (ch == '\n') {
        std::string s;
        s += all_d.front();
        s += all_d.back();
        all_d.clear();

        int x = std::stoi(s);
        s = "";
        nums.push_back(x);
      }
    }
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  int sum = 0;

  for (int n : nums) {
    sum += n;
  }

  if (std::remove("t2.txt") == 0) {
    printf("File removed successfully.\n");
  } else {
    perror("Error removing file");
  }

  std::cout << sum << std::endl;
  return 0;
}

void input_write() {
  std::ifstream file("input.txt");

  if (!file.is_open()) {
    std::cerr << "Error opening the file." << std::endl;
  }

  std::string line;

  while (std::getline(file, line)) {
    std::string n_l = replace_string(line);
  }

  return;
}

std::string replace_string(std::string str) {

  for (auto it = num_string.begin(); it != num_string.end(); ++it) {
    size_t pos = str.find(it->first);

    if (pos != std::string::npos) {
      str.replace(pos, it->first.length(), it->second);
      it = num_string.begin();
    }
  }

  std::ofstream outputFile("t2.txt", std::ios::app);

  if (outputFile.is_open()) {
    outputFile << str << std::endl;
    outputFile.close();

  } else {
    std::cerr << "Unable to open the file for writing.\n";
  }

  return str;
}
