#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

class Solution {
public:
  int carFleet(int target, std::vector<int> &position,
               std::vector<int> &speed) {

    int result = 0;
    std::vector<int> con = {};

    if (position.size() == 1) {

      return 1;
    }

    for (size_t i = position.size() - 1; i > 0; --i) {

      if (con.size() < 2) {

        con.push_back(position[i]);
      }else{

      int x = (target - position[i]) / speed[i];
      }
      /*
      if (std::find(con.begin(), con.end(), x) != con.end()) {

        position[i] += speed[i];
        continue;
      } else {

        con.push_back(x);
      }
      */
    };

 //   result = con.size();
   // std::cout << result << std::endl;

    return result;
  }
};

int main(int argc, char *argv[]) {

  Solution x;
  int target1 = 12;
  std::vector<int> pos = {10, 8, 0, 5, 3};
  std::vector<int> speed = {2, 4, 1, 1, 3};

  int target2 = 100;
  std::vector<int> pos2 = {0, 2, 4};
  std::vector<int> speed2 = {4, 2, 1};
  // std::vector<std::string> case2 = {"5", "2", "C", "D", "+"};

  x.carFleet(target1, pos, speed);
  x.carFleet(target2, pos2, speed2);

  return 0;
}
