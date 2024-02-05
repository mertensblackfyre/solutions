#include <cstring>
#include <iostream>
#include <vector>

class Solution {
public:
  int to_int(std::string line) {
    try {
      int intValue = std::stoi(line);
      return intValue;
    } catch (const std::invalid_argument &e) {
        return -1;
    } catch (const std::out_of_range &e) {
        return -1;
    }
    return -1;
  };
  int calPoints(std::vector<std::string> &operations) {

    int ans = 0;
    std::vector<int> v;

    for (size_t i = 0; i < operations.size(); i++) {
      if (to_int(operations[i]) != -1) {
        v.push_back(to_int(operations[i]));
      } else if (operations[i] == "C") {
        v.pop_back();
      } else if (operations[i] == "D") {
        v.push_back(v[v.size() - 1] * 2);
      } else if (operations[i] == "+") {
        v.push_back(v[v.size() - 1] + v[v.size() - 2]);
      }
    }

    for (int c : v)
      ans += c;

    return ans;
  }
};

int main(int argc, char *argv[]) {

  Solution x;
  std::vector<std::string> case1 = {"5", "-2", "4", "C", "D", "9", "+", "+"};
  std::vector<std::string> case2 = {"5", "2", "C", "D", "+"};
  int a = x.calPoints(case1);

  std::cout << a << std::endl;
  return 0;
}
