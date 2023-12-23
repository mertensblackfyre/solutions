#include <iostream>
#include <string>
#include <vector>

int solver(std::vector<std::string> words);

int main() {

  int n;
  std::cin >> n;
  std::vector<std::string> words;

  for (int i = 0; i < n; ++i) {

    std::string word;
    std::cin >> word;
    words.push_back(word);
  }

  solver(words);

  return 0;
}

int solver(std::vector<std::string> words) {

  for (auto word : words) {
    std::string short_word;

    int size = word.size();

    if (size < 10) {
      std::cout << word << std::endl;
      continue;
    }

    char first = word[0];
    char last = word[word.size() - 1];

    short_word +=
        std::string(1, first) + std::to_string(size - 2) + std::string(1, last);
    std::cout << short_word << std::endl;
  }

  return 0;
}
