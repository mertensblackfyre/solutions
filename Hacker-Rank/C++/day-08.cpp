#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <iterator>
#include <map>
#include <vector>

int main() {

  int n;
  std::cin >> n;

  std::map<std::string, int> p_book;
  std::vector<std::string> key;
  
  for (size_t i = 0; i < n; ++i) {
    std::string name;
    int phone;
    std::cin >> name >> phone;

    p_book.insert(std::pair<std::string, int>(name, phone));
  }

  for (size_t i = 0; i < n; ++i) {
    std::string find;
    std::cin >> find;
    key.push_back(find);
  }

  for (size_t i = 0; i < key.size(); i++) {
    if (p_book.count(key[i]) > 0)
      std::cout << key[i] << "=" << p_book[key[i]] << "\n";
    else
      std::cout << "Not found"
                << "\n";
  }
  return 0;
}
